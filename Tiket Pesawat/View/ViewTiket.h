#include <iostream>
#include <string>
#include "../model/ModelTiket.h"
using namespace std;

void vAddTiket()
{
    string inpNamaPesawat;
    string inptanggalBerangkat;
    int inphargaTiket;
    cout << "Masukkan Nama pesawat : ";
    cin >> inpNamaPesawat;
    cout << "Masukkan Tanggal Berangkat : ";
    cin >> inptanggalBerangkat;
    cout << "Masukkan Harga : ";
    cin >> inphargaTiket;
    mAddTiket(inpNamaPesawat, inptanggalBerangkat, inphargaTiket);
}

void vViewTiket()
{
    mViewTiket();
}

void vSearchTiket()
{
    int inpKodeTiket;
    cout << "Masukkan kode tiket : ";
    cin >> inpKodeTiket;
    int index = mSearchTiket(inpKodeTiket);
    if (index != -1)
    {
        cout << "Kode tiket : " << kodeTiket[index] << endl;
        cout << "Nama Pesawat : " << namaPesawatBerangkat[index] << endl;
        cout << "Tanggal Berangkat : " << tanggalBerangkat[index] << endl;
        cout << "Harga tiket : " << hargaTiket[index] << endl;
    }
    else
    {
        cout << "Tidak ada kode tiket ";
    }
}