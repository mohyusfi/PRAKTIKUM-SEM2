#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
    string Nama;
    string Nim;
    string Hobby;

    Mahasiswa(string InputNama, string InputNim, string InputHobby) {
        this->Nama = InputNama;
        this->Nim = InputNim;
        this->Hobby = InputHobby;
    }

    void sayHay(string Hay) {
        cout << Hay << "Saya adalah Mahasiswa. Nama saya " << Nama << endl;
    }
};

int main() {
    Mahasiswa mhs1("Yusfi", "F5512520089", "Coding");
    mhs1.sayHay("Hello semua...., ");

    cout << " Nama: " << mhs1.Nama << endl;

    return 0;
}