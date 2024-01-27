#include <string>
#include <iostream>
#include <random>
#include <iomanip>
#include "../database/databasetranspot.h"
// #include "../database/databaseUser.h"

string GenerateID()
{
    random_device angkaRandom;
    mt19937 generator(angkaRandom());
    uniform_int_distribution<> generateID(100000, 999999);

    int IdRandom = generateID(generator);
    return to_string(IdRandom);
}

void mAddBus(string inpNamaBus, int inpJumlahKursi)
{
    idBus[nBus] = GenerateID();
    namaBus[nBus] = inpNamaBus;
    jumlahKursi[nBus] = inpJumlahKursi;
    nBus++;
}

void mViewBus()
{
    cout << "Data Bus yang ada\n";
    cout << "Jumlah data yang di tampilkan " << nBus << endl;
    cout << "==============================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jumlah Kursi" << endl;
    cout << "==============================================================||" << endl;
    for (int i = 0; i < nBus; i++)
    {
        cout << setw(6) << i + 1 << setw(15) << idBus[i] << setw(25) << namaBus[i] << setw(13) << jumlahKursi[i] << endl;
    }
    cout << "==============================================================||" << endl;
    cout << endl;
}

int mSearchBus(string inpIdBus, string inpNamaBus)
{
    int index = -1;
    for (int i = 0; i < nBus; i++)
    {
        if (idBus[i] == inpIdBus && namaBus[i] == inpNamaBus)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "**Maaf Bis yang anda cari tidak ada**\n";
    }
    return index;
}

int mSearchJadwalForBus(string inpNamaBus)
{
    int index = -1;
    for (int i = 0; i < nBus; i++)
    {
        if (namaBus[i] == inpNamaBus)
        {
            
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "**Maaf Bus dan tujuan yang anda cari tidak ada";
    }
    return index;
}