#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    mahasiswa(string inputnama, string inputnim, string inputhobby, double inputIPK, int inputUKT) {
        nama = inputnama;
        nim = inputnim;
        hobby = inputhobby;
        IPK = inputIPK;
        UKT = inputUKT;
    }

    void lihat() {
        cout << nama << endl;
    }
};

int main() {
    cout << "ini merupakan constructor parameter" << endl;

    mahasiswa mahasiswa1("yusfi", "F52122019", "berenang", 4, 3000000);
    mahasiswa1.lihat();
}