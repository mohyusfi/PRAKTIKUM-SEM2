#include <iostream>
#include <string>
using namespace std;
class Mahasiswa {
public:
    string Nama;
    string Nim;
    string Kelas;
    int Tahun;
};
int main() {
    Mahasiswa Mahasiswa1;
    Mahasiswa1.Nama = "MOH YUSFI LAKHAFIDUN";
    Mahasiswa1.Nim = "F5512520089";
    Mahasiswa1.Kelas = "TI C";
    Mahasiswa1.Tahun = 2025;

    cout << "Nama   : " << Mahasiswa1.Nama << endl;
    cout << "Nim    : " << Mahasiswa1.Nim << endl;
    cout << "Kelas  : " << Mahasiswa1.Kelas << endl;
    cout << "Tahun  : " << Mahasiswa1.Tahun << endl;

    return 0;
}