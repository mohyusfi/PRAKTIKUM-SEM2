#include <iostream>

using namespace std;

class EWallet {
    private:
    long long int saldo = 0;
    string pin;

    protected:
    int limit_transfer = 1000000;
    int limit_saldo = 20000000;
        
    public:
    string name;

    void set_saldo(long long int amount) {
        this->saldo = amount;
    }

    virtual void transfer(int amount) {
        if (this->limit_transfer < amount) {
            cout << "jumlah tidak bisa di tranfer" << endl;
            return;
        }

        cout << "berhasil transfer Rp" << amount << endl;
    }

    void pay(EWallet *acc, int amount) {
        if(acc ==  nullptr) {
            cout << "terjadi kesalahan" << endl;
            return;
        };

        if (this->saldo < amount)
        {
            cout << "saldo mu masss" << endl;
            return;
        }
        
        acc->transfer(amount);
    }
};

class PlusAccount: public EWallet {
    public:
    PlusAccount() {
        EWallet::limit_transfer = 5000000;
        EWallet::limit_saldo = 1000;
    }

    void transfer(int amount) override {
        if (this->limit_transfer < amount) {
            cout << "jumlah tidak bisa di tranfer" << endl;
            return;
        }
        cout << "berhasil transfer Rp" << amount << endl;
    }
};

int main()
{
    EWallet account;
    PlusAccount prem_acc;

    account.set_saldo(100000);

    // *prem_acc = PlusAccount("yusfi", 100000, "123");
    account.pay(&prem_acc, 1001);
}