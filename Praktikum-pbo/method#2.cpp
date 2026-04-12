#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    void lihat() {
        cout << "nama = " << nama << endl;
        cout << "nim = " << nim << endl;
        cout << "hobby = " << hobby << endl;
        cout << "IPK = " << IPK << endl;
        cout << "UKT = " << UKT << endl << endl;
    }

    // method parameter
    void set(string setnama, string setnim, string sethobby, double setIPK, int setUKT) {
        nama = setnama;
        nim = setnim;
        hobby = sethobby;
        IPK = setIPK;
        UKT = setUKT;
    }
};

int main() {
    cout << "ini merupakan method parameter" << endl;

    mahasiswa mahasiswa9;
    mahasiswa9.set("Yusfi Method 2", "F52122019", "berenang", 4, 3000000);
    mahasiswa9.lihat();
}