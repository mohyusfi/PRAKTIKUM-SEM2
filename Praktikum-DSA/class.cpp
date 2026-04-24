#include <iostream>
using namespace std;

// Base class
class BangunDatar {
protected:
    float a, b;

public:
    BangunDatar(float x = 0, float y = 0) {
        a = x;
        b = y;
    }

    virtual float luas() = 0;
    virtual float keliling() = 0;
};

// 1. Persegi
class Persegi : public BangunDatar {
public:
    Persegi(float sisi) : BangunDatar(sisi, sisi) {}

    float luas() {
        return a * a;
    }

    float keliling() {
        return 4 * a;
    }
};

// 2. Persegi Panjang
class PersegiPanjang : public BangunDatar {
public:
    PersegiPanjang(float p, float l) : BangunDatar(p, l) {}

    float luas() {
        return a * b;
    }

    float keliling() {
        return 2 * (a + b);
    }
};

// 3. Segitiga
class Segitiga : public BangunDatar {
public:
    Segitiga(float alas, float tinggi) : BangunDatar(alas, tinggi) {}

    float luas() {
        return 0.5 * a * b;
    }

    float keliling() {
        // asumsi segitiga sama sisi (biar sederhana)
        return 3 * a;
    }
};

// 4. Lingkaran
class Lingkaran : public BangunDatar {
public:
    Lingkaran(float r) : BangunDatar(r, 0) {}

    float luas() {
        return 3.14 * a * a;
    }

    float keliling() {
        return 2 * 3.14 * a;
    }
};

// 5. Jajar Genjang
class JajarGenjang : public BangunDatar {
public:
    JajarGenjang(float alas, float tinggi) : BangunDatar(alas, tinggi) {}

    float luas() {
        return a * b;
    }

    float keliling() {
        return 2 * (a + b);
    }
};

// Main
int main() {
    Persegi p(4);
    PersegiPanjang pp(5, 3);
    Segitiga s(6, 4);
    Lingkaran l(7);
    JajarGenjang j(8, 5);

    cout << "Persegi -> Luas: " << p.luas() << ", Keliling: " << p.keliling() << endl;
    cout << "Persegi Panjang -> Luas: " << pp.luas() << ", Keliling: " << pp.keliling() << endl;
    cout << "Segitiga -> Luas: " << s.luas() << ", Keliling: " << s.keliling() << endl;
    cout << "Lingkaran -> Luas: " << l.luas() << ", Keliling: " << l.keliling() << endl;
    cout << "Jajar Genjang -> Luas: " << j.luas() << ", Keliling: " << j.keliling() << endl;

    return 0;
}