#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
private:
    string Nim;
    string Hobby;

    string getNim() {
        return Nim;
    }

    string getHobby() {
        return Hobby;
    }

public:
    string Nama;

    Mahasiswa(string InputNama, string InputNim, string InputHobby) {
        this->Nama = InputNama;
        this->Nim = InputNim;
        this->Hobby = InputHobby;
    }

    void sayHay(string Hay) {
        cout << Hay << "Saya adalah Mahasiswa. Nama saya " << Nama
             << ". Nim saya " << getNim()
             << ", dan Hobby saya adalah " << getHobby() << "." << endl;
    }

    void cek() {
        cout << "Ini merupakan method yang berada didalam class Mahasiswa (Parent)" << endl;
    }
};

int main() {
    Mahasiswa mhs("Adhit", "F52122003", "Turu");

    mhs.sayHay("Halo! ");
    mhs.cek();

    return 0;
}