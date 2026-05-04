#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front, rear, size;

public:
    // Constructor
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueue
    void enqueue(int value) {
        try {
            if (rear == size - 1) {
                throw "Queue Overflow! Cannot insert.";
            }
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " inserted into queue\n";
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    // Dequeue
    void dequeue() {
        try {
            if (front == -1 || front > rear) {
                throw "Queue Underflow! Cannot delete.";
            }
            cout << "Deleted: " << arr[front++] << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    // Display
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter queue size: ";
    cin >> n;

    Queue q(n);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);   // may overflow depending on size

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();     // underflow

    return 0;
}
