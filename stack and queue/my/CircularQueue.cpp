#include <iostream>

using namespace std;

template<typename T, int SIZE>
class CircularQueue {
    private:
    T data[SIZE];
    int front = -1;
    int rear = -1;

    public:
    bool isEmpty() {
        return this->front == -1 && this->rear == -1;
    }

    int size()  {
        return sizeof(this->data) / sizeof(this->data[0]);
    }

    bool isFull() {
        return (this->rear + 1) % this->size() == this->front;
    }

    T getFront() {
        return this->data[this->front];
    }

    T getRear() {
        return this->data[this->rear];
    }

    void enqueue(T new_data) {
        if(this->isFull()) {
            cout << "[enqueue]: Circular Queue is FULL, when add: " << new_data << endl;
            return;
        }

        if (this->isEmpty()) this->front = 0;
        this->rear = (rear + 1) % this->size();
        this->data[this->rear] = new_data;
    }

    T dequeue() {
        if(this->isEmpty()) {
            cout << "[dequeue]: Circular Queue is EMPTY!! ";
            return -1;
        }
        T deletedData = this->data[front];
        if (this->front == this->rear) {
            this->front = this->rear = -1;
            return deletedData;
        }
        this->front = (this->front + 1) % this->size();
        return deletedData;
    }

    void read() {
        if(this->isEmpty()) {
            cout << "[read]: Circular Queue is EMPTY!!!" << endl;
            return;
        }
        cout << "[ ";
        int i = this->front;
        while (i != this->rear)
        {
            cout << this->data[i];
            cout << " ";
            i = (i + 1) % this->size();
        }
        cout << data[this->rear];
        cout << "]" << endl;
    }
};


int main()
{
    CircularQueue<int, 3> numbers;
    numbers.enqueue(10);
    numbers.enqueue(20);
    numbers.enqueue(30);
    numbers.enqueue(40);

    numbers.read();

    cout << "delete: " << numbers.dequeue() << endl;
    numbers.read();
    numbers.enqueue(100);
    numbers.enqueue(11);

    numbers.read();

    cout << "delete: " << numbers.dequeue() << endl;
    cout << "delete: " << numbers.dequeue() << endl;
    

    numbers.enqueue(1000);
    numbers.enqueue(20);
    numbers.enqueue(300);

    numbers.read();
}