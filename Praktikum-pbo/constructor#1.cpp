#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    mahasiswa() {
        nama = "yusfi";
        nim = "F521223234";
        hobby = "Coding";
        IPK = 4;
        UKT = 3000000;
    }

    void lihat() {
        cout << nama << endl;
    }
};

int main() {
    cout << "ini merupakan constructor tanpa parameter" << endl;

    mahasiswa mahasiswa1;
    mahasiswa1.lihat();
}