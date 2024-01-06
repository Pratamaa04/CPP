#include <iostream>
#include <string>
#include "../Model/StudioModel.h"
using namespace std;

void vAddStudio()
{
    string namaStudioInp;
    int jumlahKursiInp;
    cout << "Nama Studio :";
    cin >> namaStudioInp;
    cout << "Jumlah Kursi :";
    cin >> jumlahKursiInp;
    mAddStudio(namaStudioInp, jumlahKursiInp);
}

void vViewStudio()
{
    mViewStudio();
}

void vSearchStudio()
{
    string namaStudioInp;
    cout << "Nama Studio :";
    cin >> namaStudioInp;
    int index = mSearchStudio(namaStudioInp);
    if (index != -1)
    {
        cout << "Nama Studio : " << namaStudio[index] << endl;
        cout << "Julmah Kursi : " << jumlahKursi[index];
    }
    else
    {
        cout << "Nama Studio tidak ada ";
    }
}