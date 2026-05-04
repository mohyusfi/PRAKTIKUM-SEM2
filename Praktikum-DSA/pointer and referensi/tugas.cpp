#include <iostream>

using namespace std;


template<typename T, size_t N> 
void display_r(T (&arr)[N]) {
    int length = sizeof(arr) / sizeof(T);
    cout << "[ ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

template<typename T, size_t N> 
void display_p(T (*arr)[N]) {
    int length = sizeof(*arr) / sizeof(T);
    cout << "[ ";
    for (int i = 0; i < length; i++)
    {
        cout << (*arr)[i] << " ";
    }
    cout << "]\n";
}


int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    display_r(numbers);
    
    cout << "\n";

    display_p(&numbers);
}