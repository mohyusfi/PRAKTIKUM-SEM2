#include <iostream>
#include <string>
using namespace std;

class MetodePembayaran {
protected:
    string namaMetode;

public:
    MetodePembayaran(string nama) : namaMetode(nama) {}

    virtual void prosesPembayaran(int total) = 0;

    void tampilkanMetode() {
        cout << "Metode pembayaran: " << namaMetode << endl;
    }

    virtual ~MetodePembayaran() {}
};

class PembayaranTunai : public MetodePembayaran {
public:
    PembayaranTunai() : MetodePembayaran("Tunai") {}

    void prosesPembayaran(int total) override {
        cout << "Menerima uang tunai sebesar Rp" << total << endl;
        cout << "Pembayaran tunai berhasil." << endl;
    }
};

class PembayaranEWallet : public MetodePembayaran {
private:
    string namaAplikasi;

public:
    PembayaranEWallet(string aplikasi)
        : MetodePembayaran("E-Wallet"), namaAplikasi(aplikasi) {}

    void prosesPembayaran(int total) override {
        cout << "Membuka aplikasi " << namaAplikasi << endl;
        cout << "Memotong saldo sebesar Rp" << total << endl;
        cout << "Pembayaran e-wallet berhasil." << endl;
    }
};

class PembayaranTransfer : public MetodePembayaran {
private:
    string namaBank;

public:
    PembayaranTransfer(string bank)
        : MetodePembayaran("Transfer Bank"), namaBank(bank) {}

    void prosesPembayaran(int total) override {
        cout << "Mengirim tagihan ke rekening " << namaBank << endl;
        cout << "Transfer sebesar Rp" << total << " berhasil diproses." << endl;
    }
};

int main() {
    int totalBelanja = 75000;

    MetodePembayaran* pembayaran[3];
    pembayaran[0] = new PembayaranTunai();
    pembayaran[1] = new PembayaranEWallet("DANA");
    pembayaran[2] = new PembayaranTransfer("BRI");

    cout << "Total belanja: Rp" << totalBelanja << endl;
    cout << "================================" << endl;

    for (int i = 0; i < 3; i++) {
        pembayaran[i]->tampilkanMetode();
        pembayaran[i]->prosesPembayaran(totalBelanja);
        cout << "--------------------------------" << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete pembayaran[i];
    }

    return 0;
}
