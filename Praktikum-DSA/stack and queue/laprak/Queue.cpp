#include <iostream>
using namespace std;
#define SIZE 5
class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
    bool isFull() {
        return rear == SIZE - 1;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(60);
    q.display();
}