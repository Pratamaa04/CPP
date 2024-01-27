#include <string>
#include <iostream>
#include <random>
#include <iomanip>

#include "../Database/databasePesawat.h"

using namespace std;

string GenerateID()
{
    random_device angkaRandom;
    mt19937 generator(angkaRandom());
    uniform_int_distribution<> generateID(100000, 999999);

    int IdRandom = generateID(generator);
    return to_string(IdRandom);
}

void mAddPesawat(string inpNamaPS, string inpJumlahKursiPS)
{
    idPS[nPesawat] = GenerateID();
    namaPesawat[nPesawat] = inpNamaPS;
    jumlahKursiPS[nPesawat] = inpJumlahKursiPS;
    nPesawat++;
}

void mViewPS()
{
    cout << "Data Pesawat yang ada\n";
    cout << "Jumlah data yang di tampilkan " << nPesawat << endl;
    cout << "==============================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jumlah Kursi" << endl;
    cout << "==============================================================||" << endl;
    for (int i = 0; i < nPesawat; i++)
    {
        cout << setw(6) << i + 1 << setw(15) << idPS[i] << setw(25) << namaPesawat[i] << setw(13) << jumlahKursiPS[i] << endl;
    }
    cout << "==============================================================||" << endl;
    cout << endl;
}

int mSearchPS(string inpIdPS, string inpNamaPS)
{
    int index = -1;
    for (int i = 0; i < nPesawat; i++)
    {
        if (idPS[i] == inpIdPS && namaPesawat[i] == inpNamaPS)
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

int mSearchJadwalPesawat(string inpNamaPS)
{
    int index = -1;
    for (int i = 0; i < nPesawat; i++)
    {
        if (namaPesawat[i] == inpNamaPS)
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