#include <string>
#include <iostream>
#include <iomanip>
// #include "modelUser.h"

using namespace std;

// Fungsi pembayaran Virtual Account
void mVirtualAccount(int totalHarga[])
{
    cout << "Metode pembayaran Virtual Account\n";

    string inpNikKtp;
    bool nikValid = false;

    while (!nikValid)
    {
        cout << "Masukkan NIK atau Nomor Telepon Anda untuk pembayaran: ";
        cin >> inpNikKtp;

        int indexUser = mSearchUserNik(inpNikKtp);

        if (indexUser != -1)
        {
            cout << "Jadi total Harga tiket yang harus anda Bayar : " << totalHarga[indexUser] << endl;
            nikValid = true;
        }
        else
        {
            cout << "NIK atau Nomor Telepon tidak ditemukan. Silakan coba lagi.\n";
        }
    }
}

// Fungsi pembayaran
void metodePembayaran(int hargaTotal, string inpNik)
{
    string inpPassword;
    int totalHarga = 0;
    int pilih;
    char konfirmasi;
    do
    {
        cout << "1. Virtual Account\n";
        cout << "2. Melalui ATM\n";
        cout << "3. Menggunakan Point\n";
        cout << "4. Exit\n";

        cout << "Silakan Pilih metode pembayaran : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            // Virtual Account
            cout << "Masukkan NIK atau Nomor Telepon anda : ";
            // cin >> inpNikKtp;
            // mVirtualAccount(inpNikKtp, hargaTotal);
            cout << "Pembayaran berhasil";
            break;
        case 2:
            // ATM
            break;
        case 3:
            int indexPoint;
            indexPoint = mSearchUserTU(inpNik);
            if (indexPoint != -1)
            {
                if (saldoPoint[indexPoint] >= hargaTotal)
                {
                    do
                    {
                        cout << "Konfirmasi Masukkan Password anda";
                        cin >> inpPassword;
                        if (inpPassword == password[indexPoint])
                        {
                            saldoPoint[indexPoint] = saldoPoint[indexPoint] - hargaTotal;
                            cout << "PEMBAYARAN BERHASIL" << endl;
                            konfirmasi = 'n';
                            pilih = 0;
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
                    } while (konfirmasi == 'y' || konfirmasi == 'Y');
                }
                else
                {
                    cout << "Saldo Anda Tidak Cukup" << endl;
                }
            }
            break;
        default:
            pilih = 0;
            break;
        }
    } while (pilih != 0);

    cout << "Terima Kasih\n";
}

void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
{
    int jumlahTiket, hargaTotal;
    string inpNikKtp;

    // Implementasi fungsi pencarian jadwal bus
    int indexBus = mSearchJdwlBus(inpNamaBis, inpStartKeberangkatan, inpTujuanKeberangkatan);

    if (indexBus != -1)
    {
        cout << "Informasi Tiket yang anda cari:\n";
        cout << "Nama BUS :" << namaBus[indexBus] << endl;
        cout << "Stasiun pertama :" << awalKeberangkatan[indexBus] << endl;
        cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexBus] << endl;
        cout << "Harga Tiket : " << hargaTiket[indexBus] << endl;

        cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
        char konfirmasi;
        cin >> konfirmasi;

        if (konfirmasi == 'y' || konfirmasi == 'Y')
        {
            cout << "Berapa tiket yang ingin Anda beli? ";
            cin >> jumlahTiket;

            hargaTotal = stoi(hargaTiket[indexBus]) * jumlahTiket;

            while (true)
            {
                cout << "Masukkan NIK atau Nomor Telepon Anda untuk pembayaran: ";
                cin >> inpNikKtp;

                int indexUser = mSearchUserNik(inpNikKtp);
                if (indexUser != -1)
                {
                    hargaTotal = stoi(hargaTiket[indexBus]) * jumlahTiket;
                    cout << "Jadi total Harga tiket yang harus anda Bayar : " << hargaTotal << endl;
                    cout << "Pilih metode Pembayaran anda : ";
                    metodePembayaran(hargaTotal, inpNikKtp);
                    break;
                }
                else
                {
                    cout << "NIK atau Nomor Telepon tidak ditemukan. Silakan coba lagi.\n";
                }
            }
        }
    }
    else
    {
        cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
    }
}

// void mTransaksiPesawat(string inpNamaPesawat, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
// {
//     int indexPesawat = mSearchJdwlPesawat(inpNamaPesawat, inpStartKeberangkatan, inpTujuanKeberangkatan);
//     if (indexPesawat != -1)
//     {
//         cout << "Informasi Tiket yang anda cari:\n";
//         cout << "Nama Pesawat :" << namaPesawat[indexPesawat] << endl;
//         cout << "Stasiun pertama :" << awalKeberangkatan[indexPesawat] << endl;
//         cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexPesawat] << endl;
//         // Menampilkan semua jadwal pesawat
//         cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
//         char konfirmasi;
//         cin >> konfirmasi;
//         if (konfirmasi == 'y' || konfirmasi == 'Y')
//         {
//             cout << "Berapa tiket yang ingin Anda beli? ";
//             int jumlahTiket;
//             cin >> jumlahTiket;
//             // Proses pembelian tiket
//         }
//     }
//     else
//     {
//         cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
//     }
// }

// void mTransaksiKereta(string inpNamaKereta, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
// {
//     int indexKereta = mSearchJdwlKereta(inpNamaKereta, inpStartKeberangkatan, inpTujuanKeberangkatan);
//     if (indexKereta != -1)
//     {
//         cout << "Informasi Tiket yang anda cari:\n";
//         cout << "Nama Kereta :" << namaKereta[indexKereta] << endl;
//         cout << "Stasiun pertama :" << awalKeberangkatan[indexKereta] << endl;
//         cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexKereta] << endl;
//         // Menampilkan semua jadwal kereta
//         cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
//         char konfirmasi;
//         cin >> konfirmasi;
//         if (konfirmasi == 'y' || konfirmasi == 'Y')
//         {
//             cout << "Berapa tiket yang ingin Anda beli? ";
//             int jumlahTiket;
//             cin >> jumlahTiket;
//             // Proses pembelian tiket
//         }
//     }
//     else
//     {
//         cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
//     }
// }
