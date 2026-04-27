#include <iostream>
using namespace std;

/*
===========================================================
 BASIC CLASS (BankAccount)
 - A class is a blueprint for objects.
 - Encapsulation is achieved using private data + public methods.
===========================================================
*/

class BankAccount {
private:
    int accountNumber;     // Encapsulation: hidden data
    double balance;        // Only accessible via methods

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Public methods to access private data
    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    /*
    ===========================================================
     NESTED CLASS (Transaction)
     - Defined inside another class.
     - Helps in logical grouping (Transaction belongs to Account).
     - Improves encapsulation (only related to BankAccount).
    ===========================================================
    */

    class Transaction {
    private:
        string type;
        double amount;

    public:
        Transaction(string t, double a) {
            type = t;
            amount = a;
        }

        void showTransaction() {
            cout << "Transaction Type: " << type << endl;
            cout << "Amount: " << amount << endl;
        }
    };
};

/*
===========================================================
 INHERITANCE
 - SavingsAccount inherits from BankAccount
 - Reuses properties + adds new behavior
===========================================================
*/

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : BankAccount(accNo, bal) {
        interestRate = rate;
    }

    void addInterest() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    /*
    ===========================================================
     INHERITANCE WITH NESTED CLASS
     - Nested class inside derived class
     - Shows specialization (Loan specific to SavingsAccount)
    ===========================================================
    */

    class Loan {
    private:
        double loanAmount;

    public:
        Loan(double amt) {
            loanAmount = amt;
        }

        void showLoan() {
            cout << "Loan Amount: " << loanAmount << endl;
        }
    };
};

/*
===========================================================
 MAIN FUNCTION
===========================================================
*/

int main() {

    // Using base class
    BankAccount acc(101, 5000);
    acc.deposit(1000);
    acc.showBalance();

    // Using nested class (Transaction)
    BankAccount::Transaction t1("Deposit", 1000);
    t1.showTransaction();

    cout << "--------------------------" << endl;

    // Using derived class (Inheritance)
    SavingsAccount sacc(202, 10000, 5.5);
    sacc.showBalance();
    sacc.addInterest();

    // Using nested class inside derived class
    SavingsAccount::Loan loan1(50000);
    loan1.showLoan();

    return 0;
}

/*
===========================================================
 SUMMARY (SHORT LEARNING POINTS)

1. CLASS:
   - Blueprint (BankAccount)

2. ENCAPSULATION:
   - Private variables + public methods
   - Protects data (balance cannot be directly accessed)

3. NESTED CLASS:
   - Class inside another class (Transaction)
   - Helps grouping + better structure

4. INHERITANCE:
   - SavingsAccount inherits BankAccount
   - Reuse + extension

5. INHERITANCE WITH NESTED CLASS:
   - Derived class also has its own nested class (Loan)
   - Shows hierarchical + modular design

===========================================================
*/
