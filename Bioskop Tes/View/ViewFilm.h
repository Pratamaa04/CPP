#include <iostream>
#include <string>
#include "../Model/FilmModel.h"
using namespace std;

void vAddFilm()
{
    string judulFilminp;
    string genreFilminp;
    string durasiFilminp;
    cout << "Masukkan Judul film : ";
    cin >> judulFilminp;
    cout << "Masukkan genre film : ";
    cin >> genreFilminp;
    cout << "Masukkan durasi film : ";
    cin >> durasiFilminp;
    mAddFilm(judulFilminp, genreFilminp, durasiFilminp);
}

void vViewFilm()
{
    mViewFilm();
}

void vSearchFilm()
{
    string judulFilminp;
    cout << "Masukkan judul film : ";
    cin >> judulFilminp;
    int index = mSearchFilm(judulFilminp);
    if (index != -1)
    {
        cout << "Judul Film : " << judulFilm[index] << endl;
        cout << "Genre Film : " << genreFilm[index] << endl;
        cout << "Durasi Film : " << durasiFilm[index] << endl;
    }
    else
    {
        cout << "Judul film tidak ada";
    }
}