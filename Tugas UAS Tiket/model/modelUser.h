#include <string>
#include <iostream>
#include <iomanip>
#include "../database/databaseUser.h"

string generateID()
{
    random_device angkaRandom;
    mt19937 generator(angkaRandom());
    uniform_int_distribution<> generateID(100000, 999999);

    int IdRandom = generateID(generator);
    return to_string(IdRandom);
}

void mAddUser(string inpNamaUser, string inpNikKtp, string inpNoTelp, string inpEmail, string inpPassword)
{
    userID[nMember] = generateID();
    namaMember[nMember] = inpNamaUser;
    noTelp[nMember] = inpNoTelp;
    password[nMember] = inpPassword;
    email[nMember] = inpEmail;
    nikKtp[nMember] = inpNikKtp;
    saldoPoint[nMember] = 0;
    nMember++;
}

int mLoginUser(string inpEmail, string inpPassword)
{
    for (int i = 0; i < nMember; i++)
    {
        if ((email[i] == inpEmail && password[i] == inpPassword) || (nikKtp[i] == inpEmail && password[i] == inpPassword))
        {
            return i;
        }
    }
    return -1;
}

void mViewUser()
{
    cout << "Data Para Member\n";
    cout << "Jumlah member : " << nMember << endl;
    cout << "================================================================================================================" << endl;
    cout << setw(10) << "No. urut" << setw(13) << "No .ID" << setw(10)
         << "Nama" << setw(17) << "No Nik Ktp" << setw(14) << "No. Telp" << setw(20) << "Email" << setw(20) << "Password" << setw(15) << "Point" << endl;
    cout << "================================================================================================================" << endl;
    for (int i = 0; i < nMember; i++)
    {
        cout << setw(7) << i + 1 << setw(15) << userID[i] << setw(12) << namaMember[i] << setw(15) << nikKtp[i] << setw(15) << noTelp[i] << setw(25) << email[i] << setw(15) << password[i] << setw(15) << saldoPoint[i] << endl;
    }
    cout << "================================================================================================================" << endl;
}

// Search User By No.Telpon

int mSearchUser(string inpNoTelp)
{
    for (int i = 0; i < nMember; i++)
    {
        if (noTelp[i] == inpNoTelp)
        {
            return i;
        }
    }
    return -1;
}

// Fungsi pencarian user berdasarkan NIK atau nomor telepon
int mSearchUserNik(string inpNikOrNoTelp)
{
    for (int i = 0; i < nMember; ++i)
    {
        if (nikKtp[i] == inpNikOrNoTelp || noTelp[i] == inpNikOrNoTelp)
        {
            return i;
        }
    }
    return -1;
}

int mSearchUserTU(string inpNoNIK)
{
    for (int i = 0; i < nMember; i++)
    {
        if (nikKtp[i] == inpNoNIK)
        {
            return i;
        }
    }
    return -1;
}

int mDeleteUser(string inpNamaUser, string inpNik)
{
    for (int i = 0; i < nMember; i++)
    {
        if (namaMember[i] == inpNamaUser && nikKtp[i] == inpNik)
        {
            for (int j = i; j < nMember - 1; j++)
            {
                userID[j] = userID[j + 1];
                namaMember[j] = namaMember[j + 1];
                nikKtp[j] = nikKtp[j + 1];
                noTelp[j] = noTelp[j + 1];
                email[j] = email[j + 1];
                password[j] = password[j + 1];
            }
            nMember--;
            return i;
        }
    }
    cout << "Data tidak ditemukan" << endl;
    return -1;
}

void mUpdatePassword(string inpNoTelp, string inpPass)
{
    int index = mSearchUser(inpNoTelp);
    if (index != -1)
    {
        password[index] = inpPass;
        cout << "Password berhasil Di rubah";
    }
    else
    {
        cout << "NO.Telp yang anda masukan tidak di temukan\n";
        cout << "Password Gagal untuk di rubah";
    }
}
