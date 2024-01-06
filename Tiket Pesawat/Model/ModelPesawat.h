#include <iostream>
#include <string>
#include "../Database/DatabasePesawat.h"

void mAddPesawat(string inpPlane, int inpKursi)
{
    namaPesawat[nPlane] = inpPlane;
    jumlahKursi[nPlane] = inpKursi;
    nPlane++;
}

void mViewPesawat()
{
    cout << "Data Pesawat" << endl;
    for (int i = 0; i < nPlane; i++)
    {
        cout << "Nama Pesawat : " << namaPesawat[i] << endl;
        cout << "jumlah kursi : " << jumlahKursi[i] << endl;

    }
}

int mSearchPesawat(string inpPesawat){
    int index = -1;
    for (int i = 0; i < nPlane; i++)
    {
        if (namaPesawat[i] == inpPesawat)
        {
            index = i;
        }
    }
    return index;
}