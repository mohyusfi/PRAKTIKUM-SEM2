#include <iostream>

using namespace std;

template <typename T, int SIZE>
class Stack {
    private:
    T data[SIZE];
    int top = -1;

    public:
    void push(T new_item) {
        if (this->isFull()) { 
            cout << "Stack is Full\n"; 
            return;
        }
        
        this->data[++this->top] = new_item; 
    }

    T pop() {
        return this->data[this->top--];
    }

    T peek() {
        return this->data[this->top];
    }

    bool isEmpty() {
        return this->top == -1;
    }

    bool isFull() {
        return this->top == this->size() - 1;
    }

    int size() {
        if(this->isEmpty()) {
            return -1;
        }
        return sizeof(this->data) / sizeof(this->data[0]);
    }

    void read() {
        if(this->isEmpty()) {
            cout << "stack is empty" << endl;
            return;
        }

        int no = 1;

        for (int index = this->top; index >= 0; index--)
        {
            cout << "item " << no++  << ": " << this->data[index] << endl;
        }
    }
};


int main()
{
    Stack<int, 3> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << "Program Struktur Data Stack: " << endl;
    numbers.read();

    int lastItem = numbers.pop();

    cout << "\npop item: " << lastItem << "\n\n";

    numbers.read();

    cout << "\npeek item: " << numbers.peek() << endl;

}