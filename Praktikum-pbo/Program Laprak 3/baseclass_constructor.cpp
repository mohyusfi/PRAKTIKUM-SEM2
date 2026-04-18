#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
    string Nama, Nim, Hobby;

    Mahasiswa(string InputNama, string InputNim, string InputHobby) {
        this->Nama = InputNama;
        this->Nim = InputNim;
        this->Hobby = InputHobby;
    }

    void sayHay(string Hay) {
        cout << Hay << "Nama saya " << Nama << endl;
    }

    void cek() {
        cout << "Cek Mahasiswa: " << Nama << " [" << Nim << "]" << endl;
    }
};

class KetuaKelas : public Mahasiswa {
public:
    KetuaKelas(string inputNama, string inputNim, string inputHobby)
        : Mahasiswa(inputNama, inputNim, inputHobby) {
    }

    void ceksuper() {
        cout << "Cek Ketua Kelas: " << Nama << " sedang bertugas." << endl;
    }
};

int main() {
    Mahasiswa Mahasiswa1("Ipham", "F52122003", "Makan");
    Mahasiswa1.sayHay("Halooo Semua, ");
    Mahasiswa1.cek();

    cout << "----------------------------------" << endl;

    KetuaKelas ketuaKelas1("Bima", "F52122015", "Mukul");
    ketuaKelas1.sayHay("Halo semua, ");
    ketuaKelas1.ceksuper();

    return 0;
}