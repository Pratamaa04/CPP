#include <string>
#include <iostream>

using namespace std;

void mTarikTunai50(string inpNoRek)
{

    int indexTarik = mSearchAkun(inpNoRek);
    if (indexTarik != -1)
    {
        int tarikSaldo;
        int pecahan50 = 0;
        cout << "Masukkan Saldo Yang akan anda ambil : " << endl;
        cin >> tarikSaldo;
        if (saldoAkun[indexTarik] >= tarikSaldo && tarikSaldo <= 50000)
        {
            if (tarikSaldo % 50000 == 0)
            {
                saldoAkun[indexTarik] = saldoAkun[indexTarik] - tarikSaldo;
                pecahan50 = tarikSaldo / 50000;
                cout << "anda mendapatkan pecahan 50000 sebanyak " << pecahan50 << "x" << endl;
            }
            else
            {
                cout << "Pengambilan Dana minimal menggunakan pecahan 50000" << endl;
            }
        }
        else
        {
            cout << "Saldo Anda Kurang" << endl;
        }
    }
}

void mTarikTunai100(string inpNoRek)
{
    int indexTarik = mSearchAkun(inpNoRek);
    if (indexTarik != -1)
    {
        int tarikSaldo;
        int pecahan100 = 0;
        cout << "Masukkan Saldo Yang akan anda ambil : " << endl;
        cin >> tarikSaldo;
        if (saldoAkun[indexTarik] >= tarikSaldo && tarikSaldo <= 100000)
        {
            if (tarikSaldo % 100000 == 0)
            {
                saldoAkun[indexTarik] = saldoAkun[indexTarik] - tarikSaldo;
                pecahan100 = tarikSaldo / 50000;
                cout << "anda mendapatkan pecahan 50000 sebanyak " << pecahan100 << "x" << endl;
            }
            else
            {
                cout << "Pengambilan Dana minimal menggunakan pecahan 100000" << endl;
            }
        }
        else
        {
            cout << "Saldo Anda Kurang" << endl;
        }
    }
}

// void mSetorTunai(string inpNoRek)
// {
//     int indexSetor = mSearchAkun(inpNoRek);
//     if (noRek[indexSetor] == inpNoRek)
//     {
//         int setorSaldo
//                 cout
//             << "Masukkan Saldo Yang ingin ada"
//     }
// }