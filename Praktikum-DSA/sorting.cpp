#include <iostream>

using namespace std;

// Fungsi Bubble Sort
void bubblesort(int arr[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi Insertion Sort
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {
                break;
            }
        }
    }
}

// Fungsi Selection Sort
void selectionsort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


// Fungsi Merge untuk Merge Sort
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi Merge Sort
void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Fungsi print array
template <typename T, size_t N>
void print_arr(T (&arr)[N])
{
    cout << "[ ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
        if (i != (N - 1))
            cout << ", ";
    }
    cout << " ]" << endl;
}

int main()
{
    int arra[5] = {3, 2, 1, 5, 4};
    int arrb[5] = {1, 3, 2, 4, 5};
    int arrc[5] = {5, 4, 1, 2, 3};
    int arrd[5] = {4, 5, 3, 2, 1};


    cout << "== Hasil Bubble Sort ==" << endl;
    cout << "input: ";
    print_arr(arra);
    bubblesort(arra, 5);
    cout << "hasil: ";
    print_arr(arra);

    cout << endl;

    cout << "== Hasil Insertion Sort ==" << endl;
    cout << "input: ";
    print_arr(arrb);
    insertionsort(arrb, 5);
    cout << "hasil: ";
    print_arr(arrb);

    cout << endl;

    cout << "== Hasil Selection Sort ==" << endl;
    cout << "input: ";
    print_arr(arrc);
    selectionsort(arrc, 5);
    cout << "hasil: ";
    print_arr(arrc);

    cout << endl;

    cout << "== Hasil Merge Sort ==" << endl;
    cout << "input: ";
    print_arr(arrd);
    mergesort(arrd, 0, 4);
    cout << "hasil: ";
    print_arr(arrd);
}