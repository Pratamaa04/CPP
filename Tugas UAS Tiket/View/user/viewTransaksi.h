#include <iostream>
#include <iomanip>
#include <string>
#include "../../model/modelTransaksi.h"

using namespace std;

void vTransaksiBus()
{
    string namaBusInp, jamKeberangkatanInp, tujuanKeberangkatanInp;
    cout << "Masukkan Nama BUS :";
    cin.ignore();
    getline(cin, namaBusInp);
    cout << "Masukkan Awal Keberangkatan :";
    getline(cin, jamKeberangkatanInp);
    cout << "Masukkan Tujuan Keberangakatan :";
    getline(cin, tujuanKeberangkatanInp);
    mTransaksiBus(namaBusInp, jamKeberangkatanInp, tujuanKeberangkatanInp);
}

// void vTransaksiPesawat()
// {
//     string namaPesawatInp, jamKeberangkatanInp, tujuanKeberangkatanInp;
//     cout << "Masukkan Nama Pesawat :";
//     cin >> namaPesawatInp;
//     cout << "Masukkan Jam Keberangkatan :";
//     cin >> jamKeberangkatanInp;
//     cout << "Masukkan Tujuan Keberangakatan :";
//     cin >> tujuanKeberangkatanInp;
//     mTransaksiPesawat(namaPesawatInp, jamKeberangkatanInp, tujuanKeberangkatanInp);
// }

// void vTransaksiKereta()
// {
//     string namaKeretaInp, jamKeberangkatanInp, tujuanKeberangkatanInp;
//     cout << "Masukkan Nama Kereta :";
//     cin >> namaKeretaInp;
//     cout << "Masukkan Jam Keberangkatan :";
//     cin >> jamKeberangkatanInp;
//     cout << "Masukkan Tujuan Keberangakatan :";
//     cin >> tujuanKeberangkatanInp;
//     mTransaksiKereta(namaKeretaInp, jamKeberangkatanInp, tujuanKeberangkatanInp);
// }