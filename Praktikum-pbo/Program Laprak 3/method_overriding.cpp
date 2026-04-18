#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string Nama;
    string Nim;
    string Hobby;

    virtual void sayHay(string Hay) {
        cout << Hay << " Saya adalah Mahasiswa. Nama saya " << Nama
             << ", Nim saya " << Nim
             << ", dan Hobby saya adalah " << Hobby << "." << endl;
    }
};

class KetuaKelas : public Mahasiswa {
public:
    void sayHay(string Hay) override {
        cout << Hay << " Saya adalah Ketua Kelas. Nama saya " << Nama
             << ", Nim saya " << Nim
             << ", dan Hobby saya adalah " << Hobby << "." << endl;
    }
};

int main() {
    Mahasiswa mahasiswa1;
    mahasiswa1.Nama = "Ipham";
    mahasiswa1.Nim = "F52122003";
    mahasiswa1.Hobby = "Makan";
    mahasiswa1.sayHay("Halooo Semua,");

    cout << endl;

    KetuaKelas ketuaKelas1;
    ketuaKelas1.Nama = "Bima";
    ketuaKelas1.Nim = "F52122016";
    ketuaKelas1.Hobby = "Membaca";
    ketuaKelas1.sayHay("Halo semua,");

    return 0;
}