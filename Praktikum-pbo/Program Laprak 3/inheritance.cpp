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
};

class KetuaKelas : public Mahasiswa {
};

int main() {
    Mahasiswa m1;
    m1.Nama = "jamal";
    m1.Nim = "F52122003";
    m1.Hobby = "Makan";
    m1.sayHay("Halo semua, ");

    KetuaKelas k1;
    k1.Nama = "yusfi";
    k1.Nim = "F52122016";
    k1.Hobby = "Membaca";
    k1.sayHay("Halo teman-teman, ");

    return 0;
}