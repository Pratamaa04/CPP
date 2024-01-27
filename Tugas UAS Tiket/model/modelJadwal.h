#include <iostream>
#include <string>
#include <iomanip>
#include "../database/databaseJadwal.h"
// #include "../model/modelBus.h"
// #include "../model/modelPesawat.h"
// #include "../model/modelKereta.h"

using namespace std;

void mAddjadwalBus(string inpNamaBus, string inpTanggal, string inpAwalKeberangkatan, string inpTujuanKeberangkatan, string inpJamKeberangkatan, string inpJamKedatangan, string inpHargaTiket)
{
    int index = mSearchJadwalForBus(inpNamaBus);
    if (index != -1)
    {
        tujuanKeberangkatan[nJadwal] = inpTujuanKeberangkatan;
        awalKeberangkatan[nJadwal] = inpAwalKeberangkatan;
        tanggalKeberangkatan[nJadwal] = inpTanggal;
        jamKeberangkatan[nJadwal] = inpJamKeberangkatan;
        jamKedatangan[nJadwal] = inpJamKedatangan;
        hargaTiket[nJadwal] = inpHargaTiket;
        nJadwal++;
    }
    else
    {
        cout << "Bus dengan nama " << inpNamaBus << " tidak ditemukan.";
    }
}

void mViewjadwalBus()
{
    cout << "daftar jadwal" << endl;
    cout << "========================================================================================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(16) << "Nama Bus" << setw(28) << "Tujuan Keberangkatan" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(15) << "Harga Tiket" << endl;
    cout << "========================================================================================================================||" << endl;
    for (int i = 0; i < nJadwal; i++)
    {
        cout << setw(6) << i + 1 << setw(15) << idBus[i] << setw(17) << namaBus[i] << setw(14) << awalKeberangkatan[i] << setw(5) << " --> " << setw(8) << tujuanKeberangkatan[i] << setw(15) << jamKedatangan[i] << setw(15) << jamKeberangkatan[i] << setw(19) << hargaTiket[i] << endl;
    }
    cout << "========================================================================================================================||" << endl;
    cout << endl;
}

int mSearchJdwlBus(string inpNamaBus, string inpAwalKeberangkatan, string inpTujuanKeberangkatan)
{
    int index = -1;
    // int indexBus = mSearchJadwalBus(inpNamaBus);
    for (int i = 0; i < nBus; i++)
    {
        if ((namaBus[i] == inpNamaBus && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan) || (namaBus[i] == inpNamaBus && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == "") || (namaBus[i] == "" && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan))
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "**Maaf Bus dan tujuan yang anda cari tidak ada\n";
    }
    return index;
}

// void mAddjadwalPesawat(string inpNamaPesawat, string inpTanggal, string inpAwalKeberangkatan ,string inpTujuanKeberangkatan ,string inpJamKeberangkatan, string inpJamKedatangan, string inpHargaTiket ){
//     int index = mSearchJadwalPesawat(inpNamaPesawat);
//     if (index != -1) {
//         tujuanKeberangkatan[nJadwal] = inpTujuanKeberangkatan;
//         awalKeberangkatan[nJadwal] = inpAwalKeberangkatan;
//         tanggalKeberangkatan[nJadwal] = inpTanggal;
//         jamKeberangkatan[nJadwal] = inpJamKeberangkatan;
//         jamKedatangan[nJadwal] = inpJamKedatangan;
//         hargaTiket[nJadwal] = inpHargaTiket;
//         nJadwal++;
//     } else {
//         cout << "Pesawat dengan nama " << inpNamaPesawat << " tidak ditemukan.";
//     }
// }

// void mAddjadwalKereta(string inpNamaKereta, string inpTanggal, string inpAwalKeberangkatan ,string inpTujuanKeberangkatan ,string inpJamKeberangkatan, string inpJamKedatangan, string inpHargaTiket ){
//     int index = mSearchJadwalKereta(inpNamaKereta);
//     if (index != -1) {
//         tujuanKeberangkatan[nJadwal] = inpTujuanKeberangkatan;
//         awalKeberangkatan[nJadwal] = inpAwalKeberangkatan;
//         tanggalKeberangkatan[nJadwal] = inpTanggal;
//         jamKeberangkatan[nJadwal] = inpJamKeberangkatan;
//         jamKedatangan[nJadwal] = inpJamKedatangan;
//         hargaTiket[nJadwal] = inpHargaTiket;
//         nJadwal++;
//     } else {
//         cout << "Kereta dengan nama " << inpNamaKereta << " tidak ditemukan.";
//     }
// }

// void mViewjadwalPesawat(){
//     cout << "daftar jadwal" << endl;
//     cout << "========================================================================================================================||" << endl;
//     cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(16) << "Nama Pesawat" << setw(28) << "Tujuan Keberangkatan" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(15) << "Harga Tiket" << endl;
//     cout << "========================================================================================================================||" << endl;
//     for (int i = 0; i < nJadwal; i++)
//     {
//         cout << setw(6) << i + 1 << setw(15) << idPesawat[i] << setw(17) << namaPesawat[i] << setw(14) << awalKeberangkatan[i] << setw(5) << " --> " << setw(8) <<tujuanKeberangkatan[i] << setw(15) << jamKedatangan[i] << setw(15) << jamKeberangkatan[i] << setw(19) << hargaTiket[i] << endl;
//     }
//     cout << "========================================================================================================================||" << endl;
//     cout << endl;
// }

// void mViewjadwalKereta(){
//     cout << "daftar jadwal" << endl;
//     cout << "========================================================================================================================||" << endl;
//     cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(16) << "Nama Kereta" << setw(28) << "Tujuan Keberangkatan" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(15) << "Harga Tiket" << endl;
//     cout << "========================================================================================================================||" << endl;
//     for (int i = 0; i < nJadwal; i++)
//     {
//         cout << setw(6) << i + 1 << setw(15) << idKereta[i] << setw(17) << namaKereta[i] << setw(14) << awalKeberangkatan[i] << setw(5) << " --> " << setw(8) <<tujuanKeberangkatan[i] << setw(15) << jamKedatangan[i] << setw(15) << jamKeberangkatan[i] << setw(19) << hargaTiket[i] << endl;
//     }
//     cout << "========================================================================================================================||" << endl;
//     cout << endl;
// }

// int mSearchJadwalPesawat(string inpNamaPesawat, string inpAwalKeberangkatan, string inpTujuanKeberangkatan){    int index = -1;
//     // int indexPesawat = mSearchJadwalPesawat(inpNamaPesawat);
//     for(int i = 0; i < nPesawat; i++){
//         if((namaPesawat[i] == inpNamaPesawat && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan) || (namaPesawat[i] == inpNamaPesawat && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == "") || (namaPesawat[i] == "" && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan)){
//             index = i;
//             break;
//         }
//     }

//     if(index == -1){
//             cout << "**Maaf Pesawat dan tujuan yang anda cari tidak ada";
//         }
//     return index;
// }

// int mSearchJadwalKereta(string inpNamaKereta, string inpAwalKeberangkatan, string inpTujuanKeberangkatan){    int index = -1;
//     // int indexKereta = mSearchJadwalKereta(inpNamaKereta);
//     for(int i = 0; i < nKereta; i++){
//         if((namaKereta[i] == inpNamaKereta && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan) || (namaKereta[i] == inpNamaKereta && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == "") || (namaKereta[i] == "" && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan)){
//             index = i;
//             break;
//         }
//     }

//     if(index == -1){
//             cout << "**Maaf Kereta dan tujuan yang anda cari tidak ada";
//         }
//     return index;
// }