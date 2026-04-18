#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
    const string Institusi = "Universitas Tadulako";

    virtual void cek() {
        cout << "Metode cek standar." << endl;
    }

    virtual void identitas() final {
        cout << "Ini adalah metode final yang tidak bisa dioverride." << endl;
    }
};

class KetuaKelas : public Mahasiswa {
public:
    void cek() override {
        cout << "Metode cek yang telah dioverride di KetuaKelas." << endl;
    }
};

int main() {
    KetuaKelas ketua1;

    cout << "Institusi: " << ketua1.Institusi << endl;
    ketua1.identitas();
    ketua1.cek();

    return 0;
}