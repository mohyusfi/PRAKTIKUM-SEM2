#include <iostream>
using namespace std;

class ketuakelas {
public:
    string Nama;

private:
    string NIM;
    string Hobby;

public:
    ketuakelas() {
        Nama = "Yusfi Ganteng";
        NIM = "20250330";
    }
    
    void setHobby(string hobby) {
        this->Hobby = hobby;
    }

    void cek() {
        cout << "Setter Hobby: " << Hobby << endl;
    }
};

int main() {
    ketuakelas kt;

    cout << "Ini hasil Program Setter" << endl;

    // public bisa mengambil dan mengubah datas
    cout << "Public nama: " << kt.Nama << endl; 

    // setter untuk mengubah data
    kt.setHobby("Game");
    kt.cek();
}