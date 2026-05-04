#include <iostream>

using namespace std;

template<typename T, int SIZE>
class Queue {
    private:
    T data[SIZE];
    int front = -1;
    int rear = -1;

    public:
    int size() {
        return sizeof(this->data) / sizeof(this->data[0]);
    }

    bool isEmpty() {
        return this->rear == -1 && this->front == -1;
    }

    bool isFull() {
        return this->rear == this->size() - 1;
    }

    void getFront() {
        if (this->isEmpty())
        {
            cout << "[getFront]: Queue is EMPTY!!" << endl;
            return;
        }
        
        cout << "front: " << this->data[front] << endl;
    }

    void getRear() {
        if (this->isEmpty())
        {
            cout << "[getRear]: Queue is EMPTY!!" << endl;
            return;
        }
        cout << "rear: " << this->data[rear] << endl;
    }

    void enqueue(T new_data) {
        if (this->isFull())  
        {
            cout << "[enqueue]: Queue is FULL, when add new data: " << new_data << endl;
            return;
        }

        if (this->isEmpty()) this->front = 0;

        this->data[++rear] = new_data;        
    }

    T dequeue() {
        if (this->isEmpty()) {
            cout << "[dequeue]: Queue is EMPTY!!" << endl;
            return -1;
        }
        if (this->rear == this->front) {
            T deleted_data = this->data[this->front];
            this->rear = this->front = -1;
            return deleted_data;
        }
        return this->data[this->front++];    
    }

    void read() {
        if (this->isEmpty())
        {
            cout << "[read]:  Queue Is empty" << endl;
            return;
        }
        cout << "[ ";
        for (int i = this->front; i <= this->rear; i++)
        {
            if (this->front == this->rear)
            {
                cout << this->data[i];
                break;
            }
            
            cout << data[i];

            cout << " ";
        }

        cout << "]" << endl;
    }
};


int main() {
    Queue<int, 5> numbers;
    numbers.enqueue(10);
    numbers.enqueue(20);
    numbers.enqueue(30);
    numbers.enqueue(40);
    numbers.enqueue(50);
    numbers.enqueue(60);

    numbers.getFront();
    numbers.getRear();

    numbers.read();

    cout << "\n\n";

    numbers.dequeue();
    numbers.dequeue();
    numbers.dequeue();
    numbers.dequeue();
    numbers.dequeue();
    numbers.dequeue();

    numbers.getFront();
    numbers.getRear();

    numbers.read();
}