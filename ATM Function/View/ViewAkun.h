#include <iostream>
#include <string>
#include "../Model/ModelAkun.h"

void vAddAkun()
{
    string inpNamaAkun, inpNoPin, inpNoRek, inpNoTelp, inpEmail;
    int inpSaldoAkun;
    cout << "Masukkan Nama : ";
    cin >> inpNamaAkun;
    cout << "Masukkan No rekening : ";
    cin >> inpNoRek;
    cout << "Masukkan No Telepon : ";
    cin >> inpNoTelp;
    cout << "Masukkan No pin : ";
    cin >> inpNoPin;
    cout << "Masukkan Email : ";
    cin >> inpEmail;
    cout << "Masukkan Saldo Akun (Saldo Akun minimal 50000): ";
    cin >> inpSaldoAkun;
    mAddAkun(inpNamaAkun, inpNoRek, inpNoTelp, inpNoPin, inpEmail, inpSaldoAkun);
}

void vViewAkun()
{
    mViewAkun();
}

void vSearchAkun()
{
    string inpNoRek;
    cout << "Masukkan NO Rekening : ";
    cin >> inpNoRek;
    int index = mSearchAkun(inpNoRek);
    if (index != -1)
    {
        cout << "Nama : " << namaAkun[index] << endl;
        cout << "No Rekening : " << noRek[index] << endl;
        cout << "No Telepon : " << noTelp[index] << endl;
        cout << "Email : " << email[index] << endl;
    }
}

void vInfoSaldo(string inpNoRek)
{
    int indexSaldo = mSearchAkun(inpNoRek);
    if (indexSaldo != -1)
    {
        cout << "Sisa Saldo anda adalah :" << saldoAkun[indexSaldo] << endl;
    }
}
