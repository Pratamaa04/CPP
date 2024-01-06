#include <iostream>

using namespace std;

int main()
{
    int pilih, harga = 0, jumlah = 0, hargaTotal = 0, point = 0;
    string namaMember, barang = "", jawab;
    cout << "MEMBERSHIP" << endl;

    do
    {
        cout << "Menu Program : \n";
        cout << "1. Isi Nama pelanggan \n";
        cout << "2. Pembelanjaan\n";
        cout << "3. Informasi Pelanggan\n";
        cout << "4. Exit\n";
        cout << "Pilihan Anda : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            cout << "Menu Isi Nama Pelanggan" << endl;
            cout << "Masukkan nama pelanggan : ";
            cin >> namaMember;
            break;
        case 2:
            cout << "Menu Pembelanjaan" << endl;
            do
            {
                jawab = "";
                cout << "Masukkan nama barang : ";
                cin >> barang;
                cout << "Masukkan harga barang : ";
                cin >> harga;
                cout << "Masukkan jumlah barang : ";
                cin >> jumlah;
                hargaTotal = harga * jumlah;
                point = hargaTotal / 10000;
                cout << "Apakah ingin mengulang (y/t)";
                cin >> jawab;
            } while (jawab == "y");
            break;
        case 3:
            cout << "Menu Informasi Pelanggan" << endl;
            if (hargaTotal < 10000000)
            {
                cout << "Nama pelanggan : " << namaMember << endl;
                cout << "Status member : MEMBER SILVER" << endl;
                cout << "Jumlah point : " << point << endl;
            }
            else if (hargaTotal >= 10000000 && hargaTotal < 20000000)
            {
                cout << "Nama pelanggan : " << namaMember << endl;
                cout << "Status member : MEMBER GOLD" << endl;
                cout << "Jumlah point : " << point << endl;
            }
            else if (hargaTotal >= 20000000 && hargaTotal < 30000000)
            {
                cout << "Nama pelanggan : " << namaMember << endl;
                cout << "Status member : MEMBER PLATINUM" << endl;
                cout << "Jumlah point : " << point << endl;
            }
            else
            {
                cout << "Nama pelanggan : " << namaMember << endl;
                cout << "Status member : MEMBER DIAMOND" << endl;
                cout << "Jumlah point : " << point << endl;
            }
            break;
        case 4:
            cout << "Terimakasih Telah berkunjung";
            break;
        default:
            pilih = 4;
            break;
        }
    } while (pilih != 4);
}