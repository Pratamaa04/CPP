#include <iostream>
#include <string>
#include "../Database/DatabaseAkun.h"

using namespace std;

void mAddAkun(string inpNamaAkun, string inpNoRek, string inpNoTelp, string inpNoPin, string inpEmail, int inpSaldoAkun)
{
    namaAkun[nAkun] = inpNamaAkun;
    noRek[nAkun] = inpNoRek;
    noTelp[nAkun] = inpNoTelp;
    noPin[nAkun] = inpNoPin;
    email[nAkun] = inpEmail;
    saldoAkun[nAkun] = inpSaldoAkun;
    nAkun++;
}

void mViewAkun()
{
    cout << "Data Akun" << endl;
    cout << " Jumlah Akun : " << nAkun << endl;
    cout << "================================================================================" << endl;
    cout << "Nama\t\tNo Telepon\t\tPIN\t\tEmail\tSaldo" << endl;
    cout << "================================================================================" << endl;
    for (int i = 0; i < nAkun; i++)
    {
        cout << namaAkun[i] << "\t\t" << noTelp[i] << "\t\t\t" << noPin[i] << "\t\t" << email[i] << "\t" << saldoAkun[i] << endl;
    }
    cout << "================================================================================" << endl;
}

int mSearchAkun(string inpNoRek)
{
    for (int i = 0; i <= nAkun; i++)
    {
        if (noRek[i] == inpNoRek)
        {
            return i;
        }
    }
    return -1;
}

int mCekLogin(string inpNoRek, string inpNoPin, int inpPinSalah)
{

    for (int i = 0; i < nAkun; i++)
    {
        if (noRek[i] == inpNoRek && noPin[i] == inpNoPin && pinSalah[i] == inpPinSalah)
        {
            return i;
        }
    }
    return -1;
}

// int mInfoSaldo(string inpNoRek)
// {
//     for (int i = 0; i < nAkun; i++)
//     {
//         if (noRek[i] == inpNoRek)
//         {
//             return saldoAkun[i];
//         }
//     }
//     return -1;
// }
