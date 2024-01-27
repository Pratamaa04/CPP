#include <iostream>
#include <string>
#include <limits>
#include "../../model/modelBus.h"
// #include "../../model/modelJadwal.h"

using namespace std;

void confirmBus(int &pilih)
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
        pilih = 7;
    }
}

void vAddBus()
{
    string inpNamaBus, idBus;
    int inpJumlahKursi;
    idBus = GenerateID();
    cin.ignore();
    cout << "Masukan Nama Bus : ";
    getline(cin, inpNamaBus);
    cout << "Masukan Jumlah Kursi : ";
    cin >> inpJumlahKursi;
    mAddBus(inpNamaBus, inpJumlahKursi);
}

void vViewBus()
{
    mViewBus();
}

void vSearchBus()
{
    string inpIdBus, inpNamaBus;
    cout << "Masukan ID Bus : ";
    cin >> inpIdBus;
    cin.ignore();
    cout << "Masukan Nama Bus : ";
    getline(cin, inpNamaBus);
    int index = mSearchBus(inpIdBus, inpNamaBus);
    cout << "Data Bus\n";
    cout << "Jumlah Bus : " << (index != -1 ? 1 : 0) << endl;
    cout << "================================================================================================================" << endl;
    cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jumlah Kursi" << endl;
    cout << "================================================================================================================" << endl;
    if (index != -1)
    {
        cout << setw(6) << index + 1 << setw(15) << idBus[index] << setw(25) << namaBus[index] << setw(13) << jumlahKursi[index] << endl;
    }
    cout << "================================================================================================================" << endl;
}

void vDeleteBus()
{
    cout << "Fitur ini akan segera tersedia";
}

void vMenuBus()
{
    int pilih;
    void vAddJadwalBus();
    void vViewJadwal();
    void vSearchJadwalBus();
    do
    {
        cout << "Menu Bus\n";
        cout << "1. Tambah Bus\n";
        cout << "2. Lihat daftar Bus\n";
        cout << "3. Cari Bus\n";
        cout << "4. Tambah Jadwal\n";
        cout << "5. Lihat Jadwal\n";
        cout << "6. Cari Jadwal\n";
        cout << "7. Kembali\n";
        cout << "Masukan pilihan anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddBus();
            // if(pilih != 9){
            // confirmBus(pilih);
            // }
            break;
        case 2:
            vViewBus();
            // if(pilih != 9){
            // confirmBus(pilih);
            // }
            break;
        case 3:
            vSearchBus();
            break;
        case 4:
            vAddJadwalBus();
            break;

        case 5:
            vViewJadwal();
            break;

        case 6:
            vSearchJadwalBus();
            break;

        case 7:
            pilih = 7;
            break;
        default:
            pilih = 7;
            break;
        }
    } while (pilih != 7);
}