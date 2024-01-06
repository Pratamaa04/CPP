#include "../Database/JadwalDatabase.h"
#include <string>
using namespace std;

void mAddJadwal(string inpJamTayang, string inpTanggalTayang, string inpNamaStudioTayang, string inpJudulFilmTayang, int inphargaTiket)
{
    int indexStudio = mSearchStudio(inpNamaStudioTayang);
    cout << "index studio : " << indexStudio << endl;
    int indexFilm = mSearchFilm(inpJudulFilmTayang);
    if (indexStudio != -1 && indexFilm != -1)
    {
        kodeTayang[nJadwal] = nJadwal + 1;
        jamTayang[nJadwal] = inpJamTayang;
        tanggalTayang[nJadwal] = inpTanggalTayang;
        namaStudioTayang[nJadwal] = inpNamaStudioTayang;
        judulFilmTayang[nJadwal] = inpJudulFilmTayang;
        hargaTiket[nJadwal] = inphargaTiket;
        nJadwal++;
    }
    else
    {
        cout << "Studio atau film tidak ditemukan";
    }
}

void mViewJadwal()
{
    cout << "Daftar jadwal" << endl;
    for (int i = 0; i < nJadwal; i++)
    {
        cout << "kode tayang : " << kodeTayang[i] << endl;
        cout << "jam tayang : " << jamTayang[i] << endl;
        cout << "tanggal tayang : " << tanggalTayang[i] << endl;
        cout << "Nama Studio : " << namaStudioTayang[i] << endl;
        cout << "Judul film : " << judulFilmTayang[i] << endl;
        cout << "harga ticket : " << hargaTiket[i] << endl;
    }
}

int mSearchJadwal(int inpKodeTayang)
{
    int index = -1;
    for (int i = 0; i < nStudio; i++)
    {
        if (kodeTayang[i] == inpKodeTayang)
        {
            index = i;
            break;
        }
    }
    return index;
}