#include <string>
#include <iostream>
#include "../../model/modelJadwal.h"

using namespace std;

void vAddJadwalBus()
{
    string inpNamaBus, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiket;
    cout << "Tambahkan Jadwal Bus\n";
    cin.ignore();
    cout << "Masukan Nama Bus : ";
    getline(cin, inpNamaBus);
    cout << "Masukan Tanggal untuk jadwal :";
    getline(cin, inpTanggal);
    cout << "Masukan Terminal Keberangkatan : ";
    getline(cin, inpAwalKeberangkatan);
    cout << "Masukan Tujuan Keberangkatan :";
    getline(cin, inpTujuanKeberangkatan);
    cout << "Masukan Jam Keberangkatan :";
    getline(cin, inpJamKeberangkatan);
    cout << "Masukan Jam Kedatangan : ";
    getline(cin, inpJamKedatangan);
    cout << "Masukan Harga Tiket : ";
    getline(cin, inpHargaTiket);
    mAddjadwalBus(inpNamaBus, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiket);
}

// void vAddJadwalPesawat(){
//     string inpNamaPesawat, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker;

//     cout << "Tambahkan Jadwal Pesawat\n";
//     cout << "Masukan Nama Pesawat : ";
//     cin >> inpNamaPesawat;
//     cout << "Masukan Tanggal untuk jadwal :";
//     cin >> inpTanggal;
//     cout << "Masukan Awal Keberangkatan : ";
//     cin >> inpAwalKeberangkatan;
//     cout << "Masukan Tujuan Keberangkatan :";
//     cin >> inpTujuanKeberangkatan;
//     cout << "Masukan Jam Keberangkatan :";
//     cin >> inpJamKeberangkatan;
//     cout << "Masukan Jam Kedatangan : ";
//     cin >> inpJamKedatangan;
//     cout << "Masukan Harga Tiket : ";
//     cin >> inpHargaTiker;
//     mAddjadwalPesawat(inpNamaPesawat, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker);
// }

// void vAddJadwalKereta(){
//     string inpNamaKereta, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker;

//     cout << "Tambahkan Jadwal Kereta\n";
//     cout << "Masukan Nama Kereta : ";
//     cin >> inpNamaKereta;
//     cout << "Masukan Tanggal untuk jadwal :";
//     cin >> inpTanggal;
//     cout << "Masukan Awal Keberangkatan : ";
//     cin >> inpAwalKeberangkatan;
//     cout << "Masukan Tujuan Keberangkatan :";
//     cin >> inpTujuanKeberangkatan;
//     cout << "Masukan Jam Keberangkatan :";
//     cin >> inpJamKeberangkatan;
//     cout << "Masukan Jam Kedatangan : ";
//     cin >> inpJamKedatangan;
//     cout << "Masukan Harga Tiket : ";
//     cin >> inpHargaTiker;
//     mAddjadwalKereta(inpNamaKereta, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker);
// }

void vViewJadwal()
{
    mViewjadwalBus();
    // mViewjadwalPesawat();
    // mViewjadwalKereta();
}

void vSearchJadwalBus()
{
    int index;
    string inpNamaBus;
    cout << "Masukan Nama Bus : ";
    cin >> inpNamaBus;
    index = mSearchJadwalForBus(inpNamaBus);
    cout << "Daftar Jadwal\n";
    if (index != -1)
    {
        cout << "daftar jadwal" << endl;
        cout << "========================================================================================================================||" << endl;
        cout << setw(10) << "ID " << setw(16) << "Nama Bus" << setw(28) << "Tujuan Keberangkatan" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(15) << "Harga Tiket" << endl;
        cout << "========================================================================================================================||" << endl;
        cout << setw(15) << idBus[index] << setw(17) << namaBus[index] << setw(14) << awalKeberangkatan[index] << setw(5) << " --> " << setw(8) << tujuanKeberangkatan[index] << setw(15) << jamKedatangan[index] << setw(15) << jamKeberangkatan[index] << setw(19) << hargaTiket[index] << endl;
        cout << "========================================================================================================================||" << endl;
        cout << endl;
    }
    else
    {
        cout << "No.Telp yang anda cari tidak ada";
    }
    cout << "================================================================================================================" << endl;
}

// void vSearchJadwalPesawat(){
//     string inpNamaPesawat;
//     cout << "Masukan Nama Pesawat : ";
//     cin >> inpNamaPesawat;
//     mSearchJadwalPesawat(inpNamaPesawat);
// }

// void vSearchJadwalKereta(){
//     string inpNamaKereta;
//     cout << "Masukan Nama Kereta : ";
//     cin >> inpNamaKereta;
//     mSearchJadwalKereta(inpNamaKereta);
// }