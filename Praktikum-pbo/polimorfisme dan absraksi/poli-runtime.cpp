#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
protected:
    string nama, nim, hobby;

public:
    Mahasiswa(string inputNama, string inputNim, string inputHobby)
        : nama(inputNama), nim(inputNim), hobby(inputHobby) {}

    virtual void sayHay(string say) {
        cout << "Mahasiswa: " << say << " (Nama: " << nama << ")" << endl;
    }
};

class KetuaKelas : public Mahasiswa {
public:
    KetuaKelas(string inputNama, string inputNim, string inputHobby)
        : Mahasiswa(inputNama, inputNim, inputHobby) {}

    void sayHay(string say) override {
        cout << "Ketua Kelas: " << say << " (Saya Ketua di sini)" << endl;
    }
};

class Sekretaris : public Mahasiswa {
public:
    Sekretaris(string inputNama, string inputNim, string inputHobby)
        : Mahasiswa(inputNama, inputNim, inputHobby) {}

    void sayHay(string say) override {
        cout << "Sekretaris: " << say << " (Saya adalah Sekretaris)" << endl;
    }
};

int main() {
    Mahasiswa* mahasiswa1;
    mahasiswa1 = new Mahasiswa("Irphan", "F52122003", "Makan");
    mahasiswa1->sayHay("Hallo Saya");
    mahasiswa1 = new KetuaKelas("Budi", "F52122815", "Jalan");
    mahasiswa1->sayHay("Hallo Semua");
    mahasiswa1 = new Sekretaris("Ani", "F52122096", "Salto");
    mahasiswa1->sayHay("Hallo Semuaa");
    delete mahasiswa1;
}