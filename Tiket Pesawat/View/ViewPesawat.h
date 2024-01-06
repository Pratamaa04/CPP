#include <iostream>
#include <string>
#include "../model/ModelPesawat.h"
using namespace std;

void vAddPesawat()
{
    string pesawatInp;
    int jumlahKursiInp;
    cout << "Masukkan Nama Pesawat : ";
    cin >> pesawatInp;
    cout << "Masukkan jumlah kursi : ";
    cin >> jumlahKursiInp;
    mAddPesawat(pesawatInp, jumlahKursiInp);
}

void vViewPesawat()
{
    mViewPesawat();
}

void vSearchPesawat()
{
    string pesawatInp;
    cout << "Masukkan judul film : ";
    cin >> pesawatInp;
    int index = mSearchPesawat(pesawatInp);
    if (index != -1)
    {
        cout << "Nama Pesawat : " << namaPesawat[index] << endl;
        cout << "Jumlah Kursi : " << jumlahKursi[index] << endl;
    }
    else
    {
        cout << "Pesawat tidak ada";
    }
}