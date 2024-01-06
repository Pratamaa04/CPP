#include <iostream>
#include <string>
#include "../Model/ModelAkun.h"
using namespace std;

void vAddAkun()
{
    string namaInp;
    string noTelpInp;
    string passwordInp;
    string emailInp;
    cout << "Masukkan nama : ";
    cin >> namaInp;
    cout << "Masukkan Telpon : ";
    cin >> noTelpInp;
    cout << "Masukkan Password : ";
    cin >> passwordInp;
    cout << "Masukkan Email : ";
    cin >> emailInp;
    mAddAkun(namaInp, noTelpInp, passwordInp, emailInp);
}

void vViewAkun()
{
    mViewAkun();
}

void vSearchAkun()
{
    string inpTelp;
    cout << "Masukkan no Telpon : ";
    cin >> inpTelp;
    int index = mSearchMember(inpTelp);
    if (index != -1)
    {
        cout << "Data Member" << endl;
        cout << "================================================================================" << endl;
        cout << "Nama\t\tno.telp\t\tpasswrpd\t\t\temail" << endl;
        cout << "================================================================================" << endl;
        cout << nama[index] << "\t\t" << noTelp[index] << "\t\t" << password[index] << "\t\t\t" << email[index] << endl;
        cout << "================================================================================" << endl;
    }
    else
    {
        cout << "No telpon tidak ditemukan";
    }
}

void vUpdatePass()
{
    string inpNoTelp, inpPassword;
    cout << "Masukkan No telpon : ";
    cin >> inpNoTelp;
    cout << "Masukkan Password : ";
    cin >> inpPassword;
    mUpdatePass(inpNoTelp, inpPassword);
}