#include <iostream>

using namespace std;


template<const int N>
class Stack {
    private:
    int data[N];
    int top = -1;
};


int main()
{
    Stack numbers::<100>;
}