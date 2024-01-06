#include <iostream>
#include <string>
#include "../Model/ModelTransfer.h"

using namespace std;

void vTransferSaldo(string inpNoRek)
{
    string noRekInp;
    int saldoAkunInp;
    cout << "Masukkan No rekening Penerima : ";
    cin >> noRekInp;
    cout << "Masukkan Saldo yang akan dikirim : ";
    cin >> saldoAkunInp;
    mTransferSaldo(inpNoRek, noRekInp, saldoAkunInp);
}