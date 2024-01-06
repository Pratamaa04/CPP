#include <iostream>
#include <string>
#include "../Model/JadwalModel.h"
using namespace std;

void vAddJadwal()
{
    string jamTayangInp;
    string tanggalTayangInp;
    string judulFilmTayangInp;
    string namaStudioTayangInp;
    int hargaTiketInp;
    cout << "Masukkan jam tayang";
    cin >> jamTayangInp;
    cout << "Masukkan tanggal tayang";
    cin >> tanggalTayangInp;
    cout << "Masukkan nama studio";
    cin >> namaStudioTayangInp;
    cout << "Masukka Judul film";
    cin >> judulFilmTayangInp;
    cout << "Masukkan harga tayang";
    cin >> hargaTiketInp;
    mAddJadwal(jamTayangInp, tanggalTayangInp, namaStudioTayangInp, judulFilmTayangInp, hargaTiketInp);
}

void ViewJadwal()
{
    mViewJadwal();
}

void vSearchJadwal()
{
    int kodeTayangInp;
    cout << "Masukkan Kode tayang";
    cin >> kodeTayangInp;
    int index = mSearchJadwal(kodeTayangInp);
    if (index != -1)
    {
        cout << "kode tayang : " << kodeTayang[index] << endl;
        cout << "jam tayang : " << jamTayang[index] << endl;
        cout << "tanggal tayang : " << tanggalTayang[index] << endl;
        cout << "Nama Studio : " << namaStudioTayang[index] << endl;
        cout << "Judul film : " << judulFilmTayang[index] << endl;
        cout << "harga ticket : " << hargaTiket[index] << endl;
    }
    else
    {
        cout << "tidak ada kode tayang";
    }
}