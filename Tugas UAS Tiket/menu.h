#include <iostream>
#include <string>
#include <limits>
// #include "view/user/viewTransaksi.h"
#include "view/admin/viewBus.h"
#include "view/admin/viewUser.h"
#include "view/admin/viewJadwal.h"
#include "view/user/viewTransaksi.h"
#include "view/user/viewTopUpPoint.h"
// #include "view/admin/viewTiket.h"
// #include "model/modelTopUp.h"
// #include "model/modelTransaksi.h"

using namespace std;

void static_value()
{
    mAddUser("kurniawan", "12312312", "0369258147", "kurniawan@gmail.com", "123456");
    mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");
    //! testing AddMember
    // mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");

    //* Testing Kendaraan Bus Static_Value
    mAddBus("Sugeng rahayu", 50);
    mAddBus("Patas", 50);

    // //* Testing Fitur Kereta dan Gerbong
    // mAddTrain("Agro bromo", "Ekonomi ekslusif", "200");
    // mAddTrain("Melati", "Eksekutif", "100");

    //*Testing jadwal
    mAddjadwalBus("Sugeng rahayu", "18-6-2024", "Surabaya", "Jember", "18.00", "15.00", "20000");
    mAddjadwalBus("Patas", "18-4-2024", "Jakarta", "Semarang", "18.00", "15.00", "150000");

    //*Testing Transaksi
}

void confirm(int &pilih)
{
    char konfirmasi;
    cout << "kembali ke menu ? (Y/N): ";
    cin >> konfirmasi;
    if (konfirmasi == 'y' || konfirmasi == 'Y')
    {
        pilih = 0;
    }

    if (konfirmasi == 'n' || konfirmasi == 'N')
    {
        pilih = 9;
    }
}

void MenuAdmin()
{
    int pilih;
    void LoginAuthentication();
    do
    {
        cout << "Menu Admin\n";
        cout << "1. Menu Edit User\n";
        cout << "2. Menu Edit Bus\n";
        cout << "3. Logout\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vMenuAdminEditUser();
            break;
        case 2:
            vMenuBus();
            break;
        case 3:
            pilih = 7;
            break;
        case 4:
            pilih = 7;
            break;
        default:
            pilih = 7;
            break;
        }

    } while (pilih != 7);
    LoginAuthentication();
}

void MenuUser(string inpNik)
{
    int pilih, pilihan;
    void LoginAuthentication();
    do
    {
        cout << "1. Tiket Bus " << endl;
        cout << "2. Isi Saldo Point" << endl;
        cout << "3. Pengaturan Profil" << endl;
        cout << "Silakan pilih Menu : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vMenuBusUser();
            break;

        case 2:
            // mtopUpAkun();
            vTopUpPoint(inpNik);
            break;

        case 3:
            cout << "1. Info Profile" << endl;
            cout << "2. Ganti Password" << endl;
            cout << "3. History" << endl;
            cout << "0. Exit" << endl;
            cout << "Masukkan Pilihan anda";
            cin >> pilihan;
            switch (pilihan)
            {
            case 1:
                vInfoAkun(inpNik);
                break;

            case 3:

                break;

            default:
                pilih = 0;
                break;
            }
        default:
            break;
        }
    } while (pilih != 0);
    cout << "Terima Kasih";
}

void LoginAuthentication()
{
    char jawab;
    string email, password;
    cout << "Masukan Email/NIK anda :";
    cin >> email;
    cout << "Masukan password anda ";
    cin >> password;

    int index = mLoginUser(email, password);
    if (email == "admin" && password == "admin")
    {
        MenuAdmin();
    }
    else if (index != -1)
    {
        MenuUser(nikKtp[index]);
    }
    else
    {
        cout << "Email/NIK atau Password yang anda masukan salah\n";
        cout << "Apakah anda ingin membuat akun ? (y/n):";
        cin >> jawab;
        if (jawab == 'y')
        {
            vAddUser();
            LoginAuthentication();
        }
        else
        {
            cout << "TerimaKasih" << endl;
        }
    }
}