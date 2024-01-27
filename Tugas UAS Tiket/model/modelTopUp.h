#include <string>
#include <iostream>
// #include "modelUser.h"

using namespace std;

void mtopUpAkun(string inpNikKtp)
{
    char konfirmasi;
    string inpPassword;
    int inpSaldoAkun;
    // int indexTiket =
    int indexTUakun = mSearchUserTU(inpNikKtp);
    if (indexTUakun != 1)
    {
        cout << "TOP UP SALDO AKUN" << endl;
        cout << "Isi Saldo Akun : ";
        cin >> inpSaldoAkun;
        do
        {
            cout << "Konfirmasi Masukkan Password anda";
            cin >> inpPassword;
            {
                if (inpPassword == password[indexTUakun])
                {
                    saldoPoint[indexTUakun] = inpSaldoAkun + saldoPoint[indexTUakun];
                    cout << "Pembayaran berhasil" << endl;
                    konfirmasi = 'n';
                }
                else
                {
                    cout << "Password Salah !";
                    cout << "Apakah anda ingin menginputkan password kembali (ketik y/n)";
                    cin >> konfirmasi;
                    if (konfirmasi != 'y' || konfirmasi != 'Y')
                    {
                        cout << "ANDA BELUM MEBAYAR " << endl;
                    }
                }
            }
        } while (konfirmasi == 'y' || konfirmasi == 'Y');       
    }
}