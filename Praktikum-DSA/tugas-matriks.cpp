#include <iostream>

void input_matriks(int (*target)[2][2], int baris, int kolom) {
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            std::cout << "isi baris: " << i << ", kolom: " << j << " = ";
            std::cin >> (*target)[i][j]; 
        }
        
    }
}   

void tampilkan_matriks(int (*target)[2][2], int baris, int kolom) {
    std::cout << "[ " << std::endl;
    for (int i = 0; i < baris; i++)
    {
        std::cout << "\t [ ";
        for (int j = 0; j < kolom; j++)
        {
            std::cout << (*target)[i][j] << " ";
        }
        std::cout << "] " << std::endl;
    }
    std::cout << "] " << std::endl;    
}

void kali_matriks(int (*matriks_a)[2][2], int (*matriks_b)[2][2], int (*result)[2][2]) {
    (*result)[0][0] = ((*matriks_a)[0][0] * (*matriks_b)[0][0]) + ((*matriks_a)[0][1] * (*matriks_b)[1][0]);
    (*result)[0][1] = ((*matriks_a)[0][0] * (*matriks_b)[0][1]) + ((*matriks_a)[0][1] * (*matriks_b)[1][1]);
    (*result)[1][0] = ((*matriks_a)[1][0] * (*matriks_b)[0][0]) + ((*matriks_a)[1][1] * (*matriks_b)[1][0]);
    (*result)[1][1] = ((*matriks_a)[1][0] * (*matriks_b)[0][1]) + ((*matriks_a)[1][1] * (*matriks_b)[1][1]);
}

int main()
{
    int matriks_a[2][2];
    int matriks_b[2][2];

    int result[2][2];

    input_matriks(&matriks_a, 2, 2);
    input_matriks(&matriks_b, 2, 2);

    kali_matriks(&matriks_a, &matriks_b, &result);

    tampilkan_matriks(&result, 2, 2);
}