#include <iostream>
#include "../Database/MemberDataBase.h"
#include <string>

using namespace std;

void mAddMember(string inpName, string inpTelp, string inpPassword, string inpEmail)
{
    nameUser[nmember] = inpName;
    noTelp[nmember] = inpTelp;
    password[nmember] = inpPassword;
    email[nmember] = inpEmail;
    nmember++;
}

void mViewMember()
{
    cout << "Data Member" << endl;
    cout << " Jumlah member : " << nmember << endl;
    cout << "================================================================================" << endl;
    cout << "Nama\t\tno.telp\t\temail\t\t\tpassword" << endl;
    cout << "================================================================================" << endl;
    for (int i = 0; i < nmember; i++)
    {
        cout << nameUser[i] << "\t\t" << noTelp[i] << "\t" << password[i] << "\t" << email[i] << endl;
    }
    cout << "================================================================================" << endl;
}

int mSearchMember(string inpNoTlp)
{
    for (int i = 0; i <= nmember; i++)
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

