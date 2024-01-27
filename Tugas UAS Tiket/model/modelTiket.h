#include <iostream>
#include <string>
#include "../Database/databaseTiket.h"
using namespace std;

void addUserTIKET(string inpNikTIKET, string inpNamaBUS, string inpTempatKeberangkatan, string inpTujuan, int inpJumlahTIKET, int inpHargaTIKET)
{
    int indexJadwal = mSearchJadwalForBus(inpNamaBUS);
    if (indexJadwal != -1)
    {
        nikTIKET[nTiket] = inpNikTIKET;
        namaBusTIKET[nTiket] = inpNamaBUS;
        tempatKeberangkatanTIKET[nTiket] = inpTempatKeberangkatan;
        tujuanTIKET[nTiket] = inpTujuan;
        tempatDudukTIKET[nTiket] = inpJumlahTIKET;
        jumlahTIKET[nTiket] = inpJumlahTIKET;
        hargaTotalTIKET[nTiket] = inpHargaTIKET;
        nTiket++;
    }
    else
    {
        cout << "Tidak Ada Jadwal" << endl;
    }
}

int mSearchTIKET(string inpNikTIKET)
{
    int index = -1;

    for (int i = 0; i < nTiket; i++)
    {
        if (nikTIKET[i] == inpNikTIKET)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "ANDA BELUM MEMBELI TIKET" << endl;
    }
    return index;
}

void mViewTiket(string inpNIk)
{
    int indexTiket;
    indexTiket = mSearchTIKET(inpNIk);
    if (indexTiket != -1)
    {
        
    }
}