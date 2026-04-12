#include <iostream>
using namespace std;

class mahasiswa {
public:
    // overloading
    string edit(string editnama, string editnim, string edithobby) {
        return editnama + " " + editnim + " " + edithobby;
    }

    string edit(string editnama, string editnim) {
        return editnama + " " + editnim;
    }

    string edit(string editnama) {
        return editnama;
    }
};

int main() {
    cout << "ini merupakan method overloading" << endl;

    mahasiswa mahasiswa9;

    string pilihan1 = mahasiswa9.edit("yusfi", "F52122019", "berenang");
    cout << "yang di edit di pilihan1 = " << pilihan1 << endl;

    string pilihan2 = mahasiswa9.edit("adit", "F55122057");
    cout << "yang di edit di pilihan2 = " << pilihan2 << endl;

    string pilihan3 = mahasiswa9.edit("joko");
    cout << "yang di edit di pilihan3 = " << pilihan3 << endl;
}