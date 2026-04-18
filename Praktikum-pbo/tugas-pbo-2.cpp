#include <iostream>
using namespace std;

class EWallet {
private:
    string nama;
    double saldo;

public:
    // constructor
    EWallet() {
        nama = "User";
        saldo = 0;
    }

    // constructor overloading
    EWallet(string n, double s) {
        nama = n;
        saldo = s;
    }

    // getter
    string getNama() {
        return nama;
    }

    double getSaldo() {
        return saldo;
    }

    // setter
    void setNama(string n) {
        nama = n;
    }

    void setSaldo(double s) {
        saldo = s;
    }

    // method
    void tampilkanData() {
        cout << "Nama  : " << nama << endl;
        cout << "Saldo : " << saldo << endl;
    }

    // method overloading
    void topUp(double uang) {
        saldo += uang;
        cout << "Top up: " << uang << endl;
    }

    void topUp(double uang, string pesan) {
        saldo += uang;
        cout << "Top up: " << uang << " (" << pesan << ")" << endl;
    }
};

int main() {
    EWallet e1;                  // constructor
    EWallet e2("Budi", 50000);   // constructor overloading

    e1.setNama("Andi");
    e1.setSaldo(100000);

    cout << "Data e1:" << endl;
    e1.tampilkanData();

    cout << "\nData e2:" << endl;
    e2.tampilkanData();

    cout << "\nGetter e2:" << endl;
    cout << e2.getNama() << endl;
    cout << e2.getSaldo() << endl;

    cout << "\nMethod overloading:" << endl;
    e2.topUp(20000);
    e2.topUp(10000, "Bonus");

    cout << "\nSetelah top up:" << endl;
    e2.tampilkanData();

    return 0;
}