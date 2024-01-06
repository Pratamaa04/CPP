#include <string>
#include <iostream>
using namespace std;

void mTransferSaldo(string inpNoRek, string noRekInp, int inpSaldoAkun)
{
    int indexAkun = mSearchAkun(noRekInp);
    int indexMakun = mSearchAkun(inpNoRek);
    if (noRek[indexAkun] == noRekInp)
    {
        if (noRek[indexMakun] == inpNoRek)
        {
            if (saldoAkun[indexMakun] >= inpSaldoAkun)
            {
                saldoAkun[indexMakun] = saldoAkun[indexMakun] - inpSaldoAkun;
                saldoAkun[indexAkun] = saldoAkun[indexAkun] + inpSaldoAkun;
            }
            else
            {
                cout << "Saldo Anda Kurang" << endl;
            }
        }
    }
}