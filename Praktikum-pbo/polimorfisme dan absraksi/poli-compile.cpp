#include <iostream>

using namespace std;

class Kalkulator {
public:
    int tambah(int angka1, int angka2) {
        return angka1 + angka2;
    }

    double tambah(double angka1, double angka2) {
        return angka1 + angka2;
    }
};

int main() {
    Kalkulator kalkulator1;

    int hitung1 = kalkulator1.tambah(1, 5);

    double hitung2 = kalkulator1.tambah(2.5, 6.5);

    cout << "Hasil int    = " << hitung1 << endl;
    cout << "Hasil double = " << hitung2 << endl;

    return 0;
}