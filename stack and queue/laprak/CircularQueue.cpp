#include <iostream>
using namespace std;

const int MAX = 5;
int antrian[MAX];
int depan = -1, belakang = -1;

bool penuh() {
    return belakang == MAX - 1;
}

bool kosong() {
    return depan == -1 || depan > belakang;
}

void tambahData(int nilai) {
    if (penuh()) {
        cout << "Queue penuh!" << endl;
        return;
    }
    if (depan == -1) depan = 0;
    belakang++;
    antrian[belakang] = nilai;
    cout << "Data " << nilai << " berhasil ditambahkan." << endl;
}

void hapusData() {
    if (kosong()) {
        cout << "Queue kosong!" << endl;
        return;
    }
    cout << "Data " << antrian[depan] << " dihapus." << endl;
    depan++;
}

void tampilData() {
    if (kosong()) {
        cout << "Queue kosong." << endl;
        return;
    }
    cout << "Isi queue: ";
    for (int i = depan; i <= belakang; i++) {
        cout << antrian[i] << " ";
    }
    cout << endl;
}

int main() {
    tambahData(12);
    tambahData(24);
    tambahData(36);
    tampilData();

    hapusData();
    tampilData();

    tambahData(48);
    tambahData(60);
    tampilData();

    return 0;
}