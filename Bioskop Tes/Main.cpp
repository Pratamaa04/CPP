#include <iostream>
#include "view/ViewFilm.h"
#include "View/ViewStudio.h"
#include "View/ViewJadwal.h"
using namespace std;

void mainmenu()
{
    int pilihan;
    while (pilihan != 4)
    {
        cout << "Menu Studio" << endl;
        cout << "1. Tambah Studio " << endl;
        cout << "2. Lihata Studio " << endl;
        cout << "3. cari studio" << endl;
        cout << "4. exit" << endl;
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            vAddStudio();
            break;

        case 2:
            vViewStudio();
            break;

        case 3:
            vSearchStudio();
            break;

        case 4:
            cout << "Terima Kasih" << endl;
            break;

        default:
            cout << "Terima Kasih" << endl;
            break;
        }
    }
}

int main()
{
    mainmenu();
}