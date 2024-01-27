#include <iostream>
#include <string>
#include "../../model/modelUser.h"

using namespace std;

void confirmUser(int &pilih)
{
    char konfirmasi;
    cout << "kembali ke menu utama? (Y/N): ";
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
void vAddUser()
{
    string inpNamaUser, inpNikKtp, inpNoTelp, inpEmail, inpPassword;
    cout << "Masukan Nama anda :";
    cin >> inpNamaUser;
    cout << "Masukan Nik KTP anda : ";
    cin >> inpNikKtp;
    cout << "Masukan No Telepon anda : ";
    cin >> inpNoTelp;
    cout << "Masukan email anda : ";
    cin >> inpEmail;
    cout << "Masukan Password anda : ";
    cin >> inpPassword;
    mAddUser(inpNamaUser, inpNikKtp, inpNoTelp, inpEmail, inpPassword);
    cout << endl;
}

void vViewUser()
{
    mViewUser();
}

void vSearchUser()
{
    string inpNoTelp;
    cout << "Masukan No Telepon : ";
    cin >> inpNoTelp;
    int index = mSearchUser(inpNoTelp);
    cout << "Data Para Member\n";
    cout << "Jumlah member : " << index << endl;
    cout << "================================================================================================================" << endl;
    cout << setw(13) << "No. urut " << setw(11) << "Nama" << setw(17) << "No Nik Ktp" << setw(14) << "No. Telp" << setw(20) << "Email" << setw(20) << "Password" << endl;
    cout << "================================================================================================================" << endl;
    if (index != -1)
    {
        cout << setw(8) << index + 1 << setw(18) << namaMember[index] << setw(15) << nikKtp[index] << setw(15) << noTelp[index] << setw(25) << email[index] << setw(15) << password[index] << endl;
    }
    else
    {
        cout << "No.Telp yang anda cari tidak ada";
    }
    cout << "================================================================================================================" << endl;
}

void vDeleteUser()
{
    string inpNamaUser, inpNikKtp;
    cout << "Masukan Nama user : ";
    cin >> inpNamaUser;
    cout << "Masukan Nik KTP : ";
    cin >> inpNikKtp;

    int index = mDeleteUser(inpNamaUser, inpNikKtp);
    if (index != -1)
    {
        cout << "Data user berhasil dihapus!!\n";
    }
    else
    {
        cout << "Data user tidak ditemukan \n";
    }
}

void vInfoAkun(string inpNik)
{
    int indexInfo = mSearchUserTU(inpNik);
    cout << "Nama : " << namaMember[indexInfo] << endl;
    cout << "NIK KTP : " << nikKtp[indexInfo] << endl;
    cout << "No Telepon : " << noTelp[indexInfo] << endl;
    cout << "Email : " << email[indexInfo] << endl;
    cout << "Saldo : " << saldoPoint[indexInfo] << endl;
}

// void vHistoryAkun(string inpNik){

//     cout << ""
// }

void vMenuAdminEditUser()
{
    int pilih;
    do
    {
        cout << "Menu User\n";
        cout << "1. Tambah user\n";
        cout << "2. Lihat user\n";
        cout << "3. Cari user\n";
        cout << "4. Kembali\n";
        cout << "Masukan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddUser();
            break;
        case 2:
            vViewUser();
            break;
        case 3:
            vSearchUser();
            break;
        case 4:
            pilih = 9;
            break;
        default:
            pilih = 9;
            break;
        }

        if (pilih != 9)
        {
            confirmUser(pilih);
        }

    } while (pilih != 9);
}

void vMenuAdmin()
{
    int pilih;
    do
    {
        cout << "Menu User\n";
        cout << "1. Tambah user\n";
        cout << "2. Lihat user\n";
        cout << "3. Cari user\n";
        cout << "4. Delete User\n";
        cout << "5. Kembali\n";
        cout << "Masukan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddUser();
            break;
        case 2:
            vViewUser();
            break;
        case 3:
            vSearchUser();
            break;
        case 4:
            vDeleteUser();
            break;
        case 5:
            pilih = 9;
            break;
        default:
            pilih = 9;
            break;
        }

        if (pilih != 9)
        {
            confirmUser(pilih);
        }

    } while (pilih != 9);
}

void vMenuBusUser()
{
    int pilih;
    void mViewjadwalBus();
    void vTransaksiBus();
    do
    {

        cout << "Menu User\n";
        cout << "1. Lihat Jadwal\n";
        cout << "2. Cari Tiket\n";
        cout << "3. Kembali\n";
        cout << "Masukan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            mViewjadwalBus();
            break;
        case 2:
            vTransaksiBus();
            break;
        case 3:
            pilih = 9;
            break;
        default:
            pilih = 9;
            break;
        }
        if (pilih != 9)
        {
            confirmUser(pilih);
        }

    } while (pilih != 9);
}
