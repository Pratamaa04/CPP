#include <string>
#include <iostream>
#include <iomanip>
#include "../database/databaseKereta.h"
using namespace std;

void mAddTrain(string inpTrainName, string inpNamaGerbong, string inpJumlahKursi)
{
    namaKereta[nKereta] = inpTrainName;
    namaGerbong[nKereta] = inpNamaGerbong;
    jumlahKursi[nKereta] = inpJumlahKursi;
    nKereta++;
}

void mViewTrain()
{
    cout << "Data Kereta\n";
    cout << "========================================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(19) << "Nama Kereta" << setw(19) << "Nama Gerbong" << setw(19) << "Jumlah Kursi" << endl;
    cout << "========================================================================||" << endl;
    for (int i = 0; i < nKereta; i++)
    {
        cout << setw(6) << i + 1 << setw(21) << namaKereta[i] << setw(21) << namaGerbong[i] << setw(14) << jumlahKursi[i] << endl;
    }
    cout << "========================================================================||" << endl;
    cout << endl;
}

int mSearchJadwalKereta(string inpNamaKereta, string inpNamaGerbong ){
    
    int index = -1;
    for(int i = 0; i < nKereta; i++){
        if(namaKereta[i] == inpNamaKereta && namaGerbong[i] == inpNamaGerbong){
            index = i;
            break;
        }
    }
        if(index == -1){
            cout << "Nama Kereta atau nama Gerbong yang anda masukan tidak dapat di temukan ";
        }
        
    return index;
}