#include "../Model/MemberModel.h"
#include <iostream>
#include <string>
using namespace std;

void vAddMember()
{
    string inpName, inpTelp, inpPassword, inpEmail;
    cout << "Masukkan nama ?";
    cin >> inpName;
    cout << "Masukkan no Telpon";
    cin >> inpTelp;
    cout << "Masukkan email";
    cin >> inpEmail;
    cout << "Masukkan password";
    cin >> inpPassword;
    mAddMember(inpName, inpTelp, inpEmail, inpPassword);
}

void vViewMember()
{
    mViewMember();
}

void vSearchMember()
{
    string inpTelp;
    cout << "Masukkan no Telpon : ";
    cin >> inpTelp;
    int index = mSearchMember(inpTelp);
    if (index != -1)
    {
        cout << "Data Member" << endl;
        cout << "================================================================================" << endl;
        cout << "Nama\t\tno.telp\t\tpassword\t\t\temail" << endl;
        cout << "================================================================================" << endl;
        cout << nameUser[index] << "\t\t" << noTelp[index] << "\t\\\t" << password[index] << "\t\t" << email[index] << endl;
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
    cout << "Masukkan No telpon";
    cin >> inpNoTelp;
    cout << "Masukkan Password";
    cin >> inpPassword;
    mUpdatePass(inpNoTelp, inpPassword);
}