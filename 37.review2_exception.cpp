#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int* arr;

public:
    // Constructor
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[size];
    }

    // Push operation
    void push(int value) {
        try {
            if (top == size - 1) {
                throw "Stack Overflow!";
            }
            arr[++top] = value;
            cout << value << " pushed into stack\n";
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    // Pop operation
    void pop() {
        try {
            if (top == -1) {
                throw "Stack Underflow!";
            }
            cout << "Popped: " << arr[top--] << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);   // Overflow

    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();      // Underflow

    return 0;
}
