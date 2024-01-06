#include <iostream>
#include "../Database/DatabaseAkun.h"
#include <string>

using namespace std;

void mAddAkun(string inpName, string inpTelp, string inpPassword, string inpEmail)
{
    nama[nAkun] = inpName;
    noTelp[nAkun] = inpTelp;
    password[nAkun] = inpPassword;
    email[nAkun] = inpEmail;
    nAkun++;
}

void mViewAkun()
{
    cout << "Data Akun" << endl;
    cout << " Jumlah Akun : " << nAkun << endl;
    cout << "================================================================================" << endl;
    cout << "Nama\t\tNo Telepon\t\tpassword\t\tEmail" << endl;
    cout << "================================================================================" << endl;
    for (int i = 0; i < nAkun; i++)
    {
        cout << nama[i] << "\t\t" << noTelp[i] << "\t\t\t" << password[i] << "\t\t" << email[i] << endl;
    }
    cout << "================================================================================" << endl;
}

int mSearchMember(string inpNoTlp)
{
    for (int i = 0; i <= nAkun; i++)
    {
        if (noTelp[i] == inpNoTlp)
        {
            return i;
        }
    }
    return -1;
}

void mUpdatePass(string inpNoTlp, string inpPassword)
{
    int index = mSearchMember(inpNoTlp);
    if (index != -1)
    {
        password[index] = inpPassword;
        cout << "Password Berhasil di ubah" << endl;
    }
    else
    {
        cout << "No, Telp tidak ditemukan" << endl;
    }
}

int mCekLogin(string inpEmail, string inpPassword)
{

    for (int i = 0; i < nAkun; i++)
    {
        if (email[i] == inpEmail && password[i] == inpPassword)
        {
            return i;
        }
    }
    return -1;
}