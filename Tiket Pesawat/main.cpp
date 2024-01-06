#include <iostream>
#include <string>
#include "View/ViewAkun.h"
#include "View/ViewPesawat.h"
#include "View/ViewTiket.h"
using namespace std;

void MenuAdmin()
{
    int pilihan;
    cout << pilihan << endl;
    while (pilihan != 10)
    {
        cout << "TESTING TIKET ADMIN" << endl;
        cout << "==================" << endl;
        cout << "1. Tambah Pesawat\n";
        cout << "2. Register Tiket \n";
        cout << "3. lihat tiket \n";
        cout << "0. exit \n";
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            vAddPesawat();
            break;

        case 2:
            vAddTiket();
            break;

        case 3:
            vViewTiket();
            break;

        default:
            pilihan = 10;
            break;
        }
    }
}

void MenuUser()
{
    int pilihan;
    cout << pilihan << endl;
    while (pilihan != 10)
    {
        cout << "TESTING TIKET USER" << endl;
        cout << "==============" << endl;
        cout << "1. lihat tiket\n";
        cout << "2. beli tiket \n";
        cout << "0. exit \n";
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            vViewTiket();
            break;

        case 2:
            cout << "Beli menggunakan kode tiket" << endl;
            vSearchTiket();
            cout << 
            break;

        default:
            pilihan = 10;
            break;
        }
    }
}

void LoginAuthentication()
{
    string inpEmail, inpPassword;
    cout << "Masukan email anda :";
    cin >> inpEmail;
    cout << "Masukan Password anda : ";
    cin >> inpPassword;

    int index = mCekLogin(inpEmail, inpPassword);
    if (inpEmail == "admin" && inpPassword == "admin")
    {
        MenuAdmin();
    }
    else if (index != -1)
    {
        MenuUser();
    }
    else
    {
        cout << "email atau password yang anda masukan salah\n";
    }
}

void mainmenu()
{
    int pilih;
    while (pilih != 0)
    {
        cout << "Menu Utama" << endl;
        cout << "==============" << endl;
        cout << "1. Register\n";
        cout << "2. Login \n";
        cout << "0. exit \n";
        cout << "Masukkan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddAkun();
            break;

        case 2:
            LoginAuthentication();
            break;

        default:
            pilih = 0;
            cout << "terima kasih";
            break;
        }
    }
}

int main()
{
    mainmenu();
    // vViewAkun();
}