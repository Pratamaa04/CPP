#include <iostream>
#include <string>
#include "../Database/StudioDataBase.h"
using namespace std;

void mAddStudio(string inpNamaStudio, int inpJumlahKursi)
{
    namaStudio[nStudio] = inpNamaStudio;
    jumlahKursi[nStudio] = inpJumlahKursi;
    nStudio++;
}

void mViewStudio()
{
    cout << "Daftar Studio";
    for (int i = 0; i < nStudio; i++)
    {
        cout << "nama Studio : " << namaStudio[i] << endl;
        cout << "Jumlah Kursi : " << jumlahKursi[i] << endl;
        cout << endl;
    }
}

int mSearchStudio(string inpNamaStudio)
{
    int index = -1;
    for (int i = 0; i < nStudio; i++)
    {
        if (namaStudio[i] == inpNamaStudio)
        {
            index = i;
            break;
        }
    }
    return index;
}