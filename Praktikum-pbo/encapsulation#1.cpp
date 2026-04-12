#include <iostream>
using namespace std;

class ketuakelas {
public:
    string Nama;

private:
    string NIM;
    string Hobby;

public:
    ketuakelas() {
        Nama = "Yusfi Ganteng";
        NIM = "20250330";
    }
    
    string getNIM() {
        return NIM;
    }
};

int main() {
    ketuakelas kt;

    cout << "Ini hasil program getter" << endl;

    // public bisa mengambil dan mengubah data
    cout << "Public nama: " << kt.Nama << endl;

    // getter hanya untuk mengambil dan melihat data
    string getNIM = kt.getNIM();
    cout << "Getter NIM: " << getNIM << endl;
}