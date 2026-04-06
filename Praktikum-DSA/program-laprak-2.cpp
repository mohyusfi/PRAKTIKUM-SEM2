#include <iostream>
using namespace std;

struct dosen {
    string nama[12] = {"Rebecca", "Carrot", "Ace", "Sabo", "Brook", "Zoro",
                       "Nami", "Luffy", "Deny Wiria", "Sanji", "Usop", "Robin"};
};

struct mahasiswa {
    string nama;
    dosen dosenwali;
};

int main() {
    mahasiswa mhs1;
    mhs1.nama = "MOH YUSFI LAKHAFIDUN";

    cout << "Nama : " << mhs1.nama << "\n";
    cout << "Dosen wali : " << mhs1.dosenwali.nama[8] << "\n";

    return 0;
}