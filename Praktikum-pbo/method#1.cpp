#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    // membuat tanpa return dan tanpa parameter
    void lihat() {
        cout << "nama = " << nama << endl;
        cout << "nim = " << nim << endl;
        cout << "hobby = " << hobby << endl;
        cout << "IPK = " << IPK << endl;
        cout << "UKT = " << UKT << endl << endl;
    }
};

int main() {
    cout << "ini merupakan method tanpa parameter dan return value" << endl;

    mahasiswa mahasiswa9;
    mahasiswa9.nama = "Yusfi";
    mahasiswa9.nim = "F5512520089";
    mahasiswa9.hobby = "Coding";
    mahasiswa9.IPK = 2;
    mahasiswa9.UKT = 4000000;

    mahasiswa9.lihat();
}