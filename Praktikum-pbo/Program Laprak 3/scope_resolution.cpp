#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string Nama;
    string Nim;
    string Hobby;

    void sayHay(string Hay) {
        cout << Hay << " Saya adalah Mahasiswa. Nama saya " << Nama
             << ", Nim saya " << Nim
             << ", dan Hobby saya adalah " << Hobby << "." << endl;
    }

    void cek() {
        cout << "Ini merupakan method yang berada didalam class Mahasiswa (Parent)" << endl;
    }
};

class KetuaKelas : public Mahasiswa {
public:
    void ceksuper() {
        Mahasiswa::cek();
    }
};

int main() {
    Mahasiswa mahasiswa1;
    mahasiswa1.Nama = "Jamal";
    mahasiswa1.Nim = "F52122003";
    mahasiswa1.Hobby = "Makan";
    mahasiswa1.sayHay("Halooo Semua,");
    mahasiswa1.cek();

    cout << endl;

    KetuaKelas ketuaKelas1;
    ketuaKelas1.Nama = "Joko";
    ketuaKelas1.Nim = "F52122016";
    ketuaKelas1.Hobby = "Memasak";
    ketuaKelas1.sayHay("Halo semua,");
    ketuaKelas1.ceksuper();

    return 0;
}