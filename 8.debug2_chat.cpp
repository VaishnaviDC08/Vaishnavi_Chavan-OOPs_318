#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accNo;
    double balance;

public:
    Account(int a, double b)
    {
        accNo = a;
        balance = b;
    }

    // ✅ Setter added
    void setBalance(double b)
    {
        if (b < 0)
        {
            cout << "Invalid balance" << endl;
            return;
        }
        balance = b;
    }

    void deposit(double amt)
    {
        if (amt < 0)
        {
            cout << "Invalid deposit amount" << endl;
            return;
        }
        balance += amt;
    }

    void withdraw(double amt)
    {
        if (amt > balance)
            cout << "Insufficient Balance" << endl;
        else
            balance -= amt;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    ~Account()
    {
        cout << "Account closed" << endl;
    }
};

class Savings : public Account
{
protected:
    double interestRate;

public:
    Savings(int a, double b, double r) : Account(a, b)
    {
        interestRate = r;
    }

    void addInterest()
    {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }

    double getRate()
    {
        return interestRate;
    }
};

class PremiumSavings : public Savings
{
private:
    int rewardPoints;

public:
    PremiumSavings(int a, double b, double r, int p)
        : Savings(a, b, r)
    {
        rewardPoints = p;
    }

    void showDetails()
    {
        display();
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Reward Points: " << rewardPoints << endl;
    }
};

class Bank;

class Auditor
{
public:
    void audit(Bank b);
};

class Bank
{
private:
    double totalFunds;

public:
    Bank()
    {
        totalFunds = 0;
    }

    void addFunds(double amt)
    {
        totalFunds += amt;
    }

    friend void Auditor::audit(Bank b);
};

void Auditor::audit(Bank b)
{
    cout << "Total Bank Funds: " << b.totalFunds << endl;
}

class Logger
{
public:
    static int logCount;

    void log(string msg)
    {
        cout << "LOG: " << msg << endl;
        logCount++;
    }
};

int Logger::logCount = 0;

int main()
{
    Savings s1(1001, 5000, 5);

    s1.deposit(1000);
    s1.addInterest();

    // ✅ Using setter instead of direct access
    s1.setBalance(10000);

    s1.display();

    PremiumSavings p1(2001, 10000, 7, 200);
    p1.showDetails();

    Logger l1;
    l1.log("Account Created");

    Logger l2;
    l2.log("Transaction Done");

    cout << "Total Logs: " << Logger::logCount << endl;

    Bank b1;
    b1.addFunds(50000);
    b1.addFunds(25000);

    Auditor a;
    a.audit(b1);

    cout << "Interest Rate: " << p1.getRate() << endl;

    return 0;
}
