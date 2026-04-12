#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    string getnama() {
        return nama;
    }

    string getnim() {
        return nim;
    }

    string gethobby() {
        return hobby;
    }

    double getIPK() {
        return IPK;
    }

    int getUKT() {
        return UKT;
    }
};

int main() {
    cout << "ini merupakan method return value" << endl;

    mahasiswa mahasiswa9;
    mahasiswa9.nama = "yusfi method 3";
    mahasiswa9.nim = "F52122019";
    mahasiswa9.hobby = "Coding";
    mahasiswa9.IPK = 2;
    mahasiswa9.UKT = 3000000;

    string nama = mahasiswa9.getnama();
    string nim = mahasiswa9.getnim();
    string hobby = mahasiswa9.gethobby();
    double IPK = mahasiswa9.getIPK();
    int UKT = mahasiswa9.getUKT();

    cout << "nama yang di return = " << nama << endl;
    cout << "nim yang di return = " << nim << endl;
    cout << "hobby yang di return = " << hobby << endl;
    cout << "IPK yang di return = " << IPK << endl;
    cout << "UKT yang di return = " << UKT << endl;
}