#include <iostream>
using namespace std;

class mahasiswa {
public:
    string nama, nim, hobby;
    double IPK;
    int UKT;

    string sayHay(string pesan) {
        return pesan + " nama saya " + nama +
               ", nim saya " + nim +
               ", saya memiliki hobby " + hobby +
               ", IPK saya semester ini " + to_string(IPK) +
               ", jumlah UKT " + to_string(UKT);
    }
};

int main() {
    cout << "ini merupakan method parameter dan return value" << endl;

    mahasiswa mahasiswa9;
    mahasiswa9.nama = "Yusfi Method 4";
    mahasiswa9.nim = "F52122019";
    mahasiswa9.hobby = "berenang";
    mahasiswa9.IPK = 2;
    mahasiswa9.UKT = 3000000;

    string pesan = mahasiswa9.sayHay("hallo");
    cout << pesan << endl;
}