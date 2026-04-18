#include <iostream>
using namespace std;

void show_matriks(int (*matriks)[10][10], int row, int column) {
    // cout << "[ " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "[ ";
        for (int j = 0; j < column; j++)
        {
            cout << (*matriks)[i][j] << " ";            
        }
        cout << "]";
        cout << endl;
    }

    // cout << "]" << endl;
}

void input_matriks(int (*matriks)[10][10], int row, int column) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "masukkan matriks[" << i << "][" << j << "] : ";
            cin >> (*matriks)[i][j]; 
        }
        
    }
    
}

void kali_matriks(
        int (*result)[10][10], 
        int (*matriks_a)[10][10], 
        int (*matriks_b)[10][10], 
        int row_a, 
        int column_a, int column_b) 
{
    for (int i = 0; i < row_a; i++)
    {
        for (int j = 0; j < column_b; j++)
        {
            int current_item = 0;
            for (int k = 0; k < column_a; k++)
            {
                current_item += (*matriks_a)[i][k] * (*matriks_b)[k][j];
            }
            (*result)[i][j] = current_item;
        }
        
    }
    
}


int main()
{
    int matriks_a[10][10], matriks_b[10][10], result[10][10];

    int row_a, row_b;
    int column_a, column_b;

    cout << "masukkan baris matriks a: ";
    cin >> row_a;

    cout << "kolom matriks a: ";
    cin >> column_a;

    cout << "masukkan baris matriks b: ";
    cin >> row_b;

    cout << "kolom matriks b: ";
    cin >> column_b;

    if (column_a != row_b)
    {
        cout << "baris matriks a dan kolom matriks b harus sama!!!!" << endl;
        return 0;
    }
    

    input_matriks(&matriks_a, row_a, column_a);
    input_matriks(&matriks_b, row_b, column_b);

    kali_matriks(&result, &matriks_a, &matriks_b, row_a, column_a, column_b);

    show_matriks(&result, row_a, column_b);
}