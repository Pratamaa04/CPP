#include <iostream>
#include <string>
#include "view/ViewAkun.h"
#include "view/ViewTransfer.h"
#include "View/ViewSetorTarik.h"

using namespace std;

void menuUser()
{
    int pilihan, inpPinSalah;
    int pecahan;
    string inpNoRek;
    char jawaban;
    string inpNoPin;
    int pilih;
    char jawab;
    cout << "Masukkan No rekening : ";
    cin >> inpNoRek;
    cout << "Masukkan No pin : ";
    cin >> inpNoPin;

    int index = mCekLogin(inpNoRek, inpNoPin, inpPinSalah);
    if (inpPinSalah == 3)
    {
        cout << "ATM ANDA TERBLOKIR" << endl;
    }
    else
    {
        if (index != -1)
        {
            cout << "Login Berhasil" << endl;
            while (pilihan != 9)
            {
                cout << "Menu " << endl;
                cout << "1. Transfer Uang\n";
                cout << "2. Tarik Tunai\n";
                cout << "3, Info Saldo\n";
                cout << "4. Setor Tunai\n";
                cout << "9. Exit\n";
                cout << "Masukkan Pilihan Anda : ";
                cin >> pilihan;
                switch (pilihan)
                {
                case 1:
                    vSearchAkun();
                    cout << "apakah data yang dimasukkan sudah benar (y/n): ";
                    cin >> jawaban;
                    if (jawaban == 'y')
                    {
                        vTransferSaldo(inpNoRek);
                    }
                    else
                    {
                        pilihan = 1;
                    }
                    break;

                case 2:
                    cout << "Pilih Pecahan:\n";
                    cout << "1. Pecahan 50\n";
                    cout << "2. Pecahan 100\n";
                    cout << "0. kembali\n";
                    cout << "piliahan anda : ";
                    cin >> pecahan;
                    switch (pecahan)
                    {
                    case 1:
                        vTarikTunai50(inpNoRek, inpNoPin);
                        break;

                    case 2:
                        vTarikTunai100(inpNoRek);
                    default:
                        break;
                    }
                    break;

                case 3:
                    vInfoSaldo(inpNoRek);
                    break;

                default:
                    break;
                }
            }
        }
        else
        {
            cout << "Akun tidak ditemukan " << endl;
            cout << "Apkah anda ingin keluar : (y/n)";
            cin >> jawab;
            if (jawab == 'y')
            {
                pilih = 0;
            }
        }
    }
}

void mainmenu()
{
    int pilih;
    cout << pilih;
    cout << "selamat datang di TABU" << endl;
    while (pilih != 0)
    {
        cout << "Menu utama" << endl;
        cout << "1. Register akun" << endl;
        cout << "2. Login" << endl;
        cout << "0. Exit" << endl;
        cout << "Masukkan Pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddAkun();
            break;

        case 2:
            menuUser();
            break;

        default:
            break;
        }
    }
}

int main()
{
    mainmenu();
}