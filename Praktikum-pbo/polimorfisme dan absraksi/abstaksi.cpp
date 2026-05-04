#include <iostream>
#include <string>
using namespace std;

class SivitasAkademika {
protected:
    string nama;

public:
    SivitasAkademika(string n) : nama(n) {}

    virtual void kerjakanTugas() = 0;

    void perkenalan() {
        cout << "Nama saya " << nama << endl;
    }
};

class Dosen : public SivitasAkademika {
public:
    Dosen(string n) : SivitasAkademika(n) {}

    void kerjakanTugas() override {
        cout << "[Tugas Dosen] Mengajar materi PBO dan memberi nilai." << endl;
    }
};

class MahasiswaPraktikan : public SivitasAkademika {
public:
    MahasiswaPraktikan(string n) : SivitasAkademika(n) {}

    // Wajib di-override
    void kerjakanTugas() override {
        cout << "[Tugas Mahasiswa] Mengerjakan laporan praktikum dan kode." << endl;
    }
};

int main() {
    SivitasAkademika* sivitas1 = new Dosen("Pak Budi");
    SivitasAkademika* sivitas2 = new MahasiswaPraktikan("Ipham");
    sivitas1->perkenalan();
    sivitas1->kerjakanTugas();
    cout << "--------------------------------------" << endl;
    sivitas2->perkenalan();
    sivitas2->kerjakanTugas();
    delete sivitas1;
    delete sivitas2;
}