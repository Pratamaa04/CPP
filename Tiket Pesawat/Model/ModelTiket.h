#include <iostream>
#include <string>
#include "../Database/DatabaseTiket.h"
// #include "../Model/ModelPesawat.h"

void mAddTiket(string namaPesawatInp, string tanggalBerangkatInp, int hargaTiketInp)
{
    int indexPesawat = mSearchPesawat(namaPesawatInp);
    cout << "IndexPesawat " << indexPesawat << endl;
    if (indexPesawat != -1)
    {
        kodeTiket[nTiket] = nTiket + 1;
        namaPesawatBerangkat[nTiket] = namaPesawatInp;
        tanggalBerangkat[nTiket] = tanggalBerangkatInp;
        hargaTiket[nTiket] = hargaTiketInp;
        nTiket++;
    }
    else
    {
        cout << "Tidak ada Pesawat yang dicari";
    }
}

void mViewTiket()
{
    cout << "Daftar Keberangkatan" << endl;
    for (int i = 0; i < nTiket; i++)
    {
        cout << "kode tiket : " << kodeTiket[i] << endl;
        cout << "Nama pesawat : " << namaPesawatBerangkat[i] << endl;
        cout << "Tanggal berangkat : " << tanggalBerangkat[i] << endl;
        cout << "Harga Tiket : " << hargaTiket[i] << endl;
    }
}

int mSearchTiket(int kodeTiketInp)
{
    int index = -1;
    for (int i = 0; i < nTiket; i++)
    {
        if (kodeTiket[i] == kodeTiketInp)
        {
            index = i;
            break;
        }
    }
    return index;
}