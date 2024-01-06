#include <iostream>
#include <string>
#include "../Database/FilmDatabase.h"
using namespace std;

void mAddFilm(string inpJudulFilm, string inpGenreFilm, string inpDurasiFilm)
{
    judulFilm[nFilm] = inpJudulFilm;
    genreFilm[nFilm] = inpGenreFilm;
    durasiFilm[nFilm] = inpDurasiFilm;
    nFilm++;
}

void mViewFilm()
{
    cout << "Daftar Film" << endl;
    for (int i = 0; i < nFilm; i++)
    {
        cout << "Judul Film :" << judulFilm[i] << endl;
        cout << "Genre Film :" << genreFilm[i] << endl;
        cout << "Durasi Film :" << durasiFilm[i] << endl;
    }
}

int mSearchFilm(string inpJudulFilm)
{
    int index = -1;
    for (int i = 0; i < nFilm; i++)
    {
        if (judulFilm[i] == inpJudulFilm)
        {
            index = i;
        }
    }
    return index;
}