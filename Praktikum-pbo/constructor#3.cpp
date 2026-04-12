#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;

    // pilihan 1
    mahasiswa(string inputnama, string inputnim, string inputhobby) {
        nama = inputnama;
        nim = inputnim;
        hobby = inputhobby;
    }

    // pilihan 2
    mahasiswa(string inputnama, string inputnim) {
        nama = inputnama;
        nim = inputnim;
    }

    // pilihan 3
    mahasiswa(string inputnama) {
        nama = inputnama;
    }

    // pilihan 4
    mahasiswa() {}

    void lihat() {
        cout << nama << endl;
    }
};

int main() {
    cout << "ini merupakan constructor overloading" << endl;

    mahasiswa mahasiswa2("yusfi", "F52122019", "berenang");
    mahasiswa2.lihat();

    mahasiswa mahasiswa3("jamal", "F55122057");
    mahasiswa3.lihat();

    mahasiswa mahasiswa4("jokos");
    mahasiswa4.lihat();

    mahasiswa mahasiswa5;
    mahasiswa5.lihat();
}