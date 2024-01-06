#include <iostream>

using namespace std;

int main()
{
    int defaultNoRek = 123456, defaultNoRekA = 22222, defaultNoRekB = 33333, defaultPin = 1234, pin = 0, noRek = 0, inputRek = 0, inputPin = 0;
    int saldo = 1000, nominal = 0, pecahan, pecahan50 = 50, pecahan100 = 100;
    int ulang = 0, ulangNorek = 0, konfirmasi = 0;
    int ulangMenu = 0, pilih;
    int kodeTransaksi, pilihRekening, transaksiA = 88777, harga = 10;
    // USER memesukan pin
    cout << "ATM SEDERHANA\n";
    // Pengulangan Sementar hanya untuk pin jika salah atau benar ATM terblokir (Mungkin bisa ditambah no rek)
    while (ulang < 3)
    {
        cout << "Masukan No rekening anda : ";
        cin >> inputRek;
        cout << "Masukan No pin anda : ";
        cin >> inputPin;
        // USER masuk dalam menu
        if (inputRek == defaultNoRek && inputPin == defaultPin)
        {
            // pengulangan untuk menu
            while (pilih != 0)
            {
                cout << "Pilih Transaksi \n";
                cout << "1. Transfer uang \n";
                cout << "2. Tarik tunai \n";
                cout << "3. Info saldo \n";
                cout << "4. Setor tunai \n";
                cout << "5. Pembayaran virtual account \n";
                cout << "0. Exit\n";
                cout << "Masukan pilihan anda :";
                cin >> pilih;
                ulangNorek = 0;
                switch (pilih)
                {
                    // Menu Transfer
                case 1:
                    cout << "Menu Transfer\n";
                    // Pengulangan no rek tujuan
                    while (ulangNorek == 0)
                    {
                        // User input no rek tujuan
                        cout << "Masukkan No rekening tujuan: ";
                        cin >> noRek;
                        // pengkondisian jika no rek tidak terdaftar
                        if (noRek == defaultNoRekA || noRek == defaultNoRekB)
                        {
                            // User input nominal
                            cout << "Masukkan Nominal : ";
                            cin >> nominal;
                            // pengkondisian jika saldo lebih atau kurang
                            if (saldo >= nominal && nominal >= 10)
                            {
                                // Konfirmasi jika inputan user benar
                                cout << "NO rekening tujuan : " << noRek << endl;
                                cout << "Nominal uang : " << nominal << endl;
                                cout << "Apakah yang anda masukkan sudah benar !\n(Ketik 1 untuk IYA / ketik 0 untuk TIDAK) :";
                                cin >> konfirmasi;
                                if (konfirmasi != 0)
                                {
                                    // Pengulangan jika pin salah atm terblokir
                                    ulangMenu = 0;
                                    while (ulangMenu < 3)
                                    {
                                        // Konfirmasi pin jika inputan sudah benar
                                        cout << "Masukkan Pin untuk konfirmasi:";
                                        cin >> pin;
                                        // pekondisian untuk pin salah atau benar
                                        if (pin == defaultPin)
                                        {
                                            // progress pengurangan saldo
                                            saldo = saldo - nominal;
                                            cout << "Transaksi Berhasil\n";
                                            cout << "Saldo tersisa : " << saldo << endl;
                                            // jika ingin melakukan transaksi lainnya
                                            cout << "Apakah anda ingin melakukan transaksi lainnya ?\n(Ketik 1 untuk iya / ketik 0 untuk tidak)";
                                            cin >> pilih;
                                            if (pilih != 0)
                                            {
                                                ulangMenu = 3;
                                                ulangNorek = 1;
                                            }
                                            else
                                            {
                                                ulangNorek = 1;
                                                ulangMenu = 3;
                                                ulang = 3;
                                            }
                                        }
                                        // pengkondisian jika pin salah
                                        else
                                        {
                                            cout << "PIN SALAH!\n";
                                            ulangMenu++;
                                            if (ulangMenu == 3)
                                            {
                                                ulangNorek = 1;
                                                ulang = 3;
                                                pilih = 0;
                                                cout << "ATM terblokir" << endl;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    // konfirmasi untuk mengubah tujuan no rekening
                                    cout << "Apakah ingin mengubah tujuan no rekening dan nominal ?\n (ketik 1 untuk IYA / ketik 0 untuk kembali ke menu)";
                                    cin >> konfirmasi;
                                    if (konfirmasi != 0)
                                    {
                                        ulangNorek = 0;
                                    }
                                    else
                                    {
                                        ulangNorek = 1;
                                    }
                                }
                            }
                            else
                            {
                                cout << "Saldo Anda Kurang atau minimal transfer 10.000\n";
                                cout << "Apakah anda ingin melakukan transaksi lainnya ?\n(Ketik 1 untuk iya / ketik 0 untuk tidak)";
                                cin >> pilih;
                                if (pilih == 0)
                                {
                                    ulangNorek = 1;
                                    ulang = 3;
                                }
                                else
                                {
                                    ulangNorek = 1;
                                }
                            }
                        }
                        // jika no rekening tujuan tidak ditemukan
                        else
                        {
                            cout << "No rekening tujuan tidak ditemukan" << endl;
                            cout << "Apakah anda ingin mengisi ulang no rekening tujuan \n (ketik 1 untuk kembali ke menu / ketik 0 untuk mengisi ulang)";
                            cin >> ulangNorek;
                        }
                    }
                    break;

                // menu tarik tunai
                case 2:
                    cout << "Menu Tarik tunai" << endl;
                    cout << "Pilih pecahan yang anda inginkan :\n (50 untuk pecahan 50 dan 100 untuk pecahan 100) ";
                    cin >> pecahan;
                    switch (pecahan)
                    {
                    case 50:
                        cout << "Masukkan nominal : ";
                        cin >> nominal;
                        ulangMenu = 0;
                        if (saldo >= nominal)
                        {
                            while (ulangMenu < 3)
                            {
                                cout << "Masukkan Pin untuk konfirmasi :";
                                cin >> pin;
                                if (pin == defaultPin)
                                {
                                    if (nominal % pecahan50 == 0)
                                    {

                                        pecahan50 = nominal / pecahan50;
                                        saldo = saldo - nominal;
                                        cout << "Pecahan yang anda dapatkan sebanyak : " << pecahan50 << endl;
                                        cout << "Sisa saldo anda :" << saldo << endl;
                                        cout << "Apakah anda ingin melakukan transaksi lainnya : \n(ketik 1 untuk IYA / Ketik 0 untuk tidak)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            pilih = 1;
                                        }
                                        else
                                        {
                                            ulangMenu = 3;
                                            ulang = 3;
                                        }
                                    }
                                    else
                                    {
                                        cout << "pengambilan minimal 50" << endl;
                                        cout << "Apakah anda ingin melakukan transaksi lainnya : \n (ketik 1 untuk IYA / ketik 0 untu TIDAK)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            ulangMenu = 3;
                                            pilih = 1;
                                        }
                                        else
                                        {
                                            ulangMenu = 3;
                                            ulang = 3;
                                        }
                                    }
                                }
                                else
                                {
                                    ulangMenu++;
                                    cout << "PIN SALAH!!! \n";
                                    if (ulangMenu == 3)
                                    {
                                        cout << "ATM anda terblokir" << endl;
                                        pilih = 0;
                                        ulang = 3;
                                    }
                                    else
                                    {
                                        cout << "Anda sudah memasukkan pin salah sebanyak : " << ulangMenu << endl;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Saldo Anda Kurang" << endl;
                            cout << "Apakah anda ingin melakukan transaksi lainnya : \n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                            cin >> pilih;
                            if (pilih == 0)
                            {
                                ulang = 3;
                            }
                        }
                        break;

                    case 100:
                        cout << "Masukkan nominal : ";
                        cin >> nominal;
                        if (saldo >= nominal)
                        {
                            ulangMenu = 0;
                            while (ulangMenu < 3)
                            {
                                cout << "Masukkan Pin untuk konfirmasi :";
                                cin >> pin;
                                if (pin == defaultPin)
                                {
                                    if (nominal % pecahan100 == 0)
                                    {

                                        pecahan100 = nominal / pecahan100;
                                        saldo = saldo - nominal;
                                        cout << "Pecahan yang anda dapatkan sebanyak : " << pecahan100 << endl;
                                        cout << "Sisa saldo anda :" << saldo << endl;
                                        cout << "Apakah anda ingin melakukan transaksi lainnya : \n(ketik 1 untuk IYA / Ketik 0 untuk tidak)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            ulangMenu = 3;
                                            pilih = 1;
                                        }
                                        else
                                        {
                                            ulangMenu = 3;
                                            ulang = 3;
                                        }
                                    }
                                    else
                                    {
                                        cout << "pengambilan minimal 100" << endl;
                                        cout << "Apakah anda ingin melakukan transaksi lainnya : \n (ketik 1 untuk IYA / ketik 0 untu TIDAK)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            ulangMenu = 3;
                                            pilih = 1;
                                        }
                                        else
                                        {
                                            ulangMenu = 3;
                                            ulang = 3;
                                        }
                                    }
                                }
                                else
                                {
                                    ulangMenu++;
                                    cout << "PIN SALAH!!! \n";
                                    if (ulangMenu == 3)
                                    {
                                        cout << "ATM anda terblokir" << endl;
                                        pilih = 0;
                                        ulang = 3;
                                    }
                                    else
                                    {
                                        cout << "Anda sudah memasukkan pin salah sebanyak : " << ulangMenu << endl;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Saldo Anda Kurang" << endl;
                            cout << "Apakah anda ingin melakukan transaksi lainnya : \n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                            cin >> pilih;
                            if (pilih == 0)
                            {
                                ulang = 3;
                            }
                        }
                        break;

                    default:
                        cout << "Pilihan anda tidak tersedia !!!" << endl;

                        pilih = 1;
                        break;
                    }
                    break;

                case 3:
                    cout << "Menu Info saldo\n";
                    cout << "Informasi saldo anda adalah :" << saldo << endl;
                    cout << "apakah anda ingin melakukan transaksi lainnya : \n(ketik 1 untuk IYA / Ketik 0 untuk TIDAK)";
                    cin >> pilih;
                    if (pilih != 0)
                    {
                        pilih = 1;
                    }
                    else
                    {
                        ulang = 3;
                    }
                    break;

                case 4:
                    cout << "Menu Setor tunai\n";
                    cout << "Masukkan nominal : ";
                    cin >> nominal;
                    if (nominal % pecahan100 == 0)
                    {
                        cout << "Setor ke rekening : \n (ketik 1 untuk setor ke rekening anda / ketik 2 untuk setor ke rekening lain)";
                        cin >> pilihRekening;
                        ulangMenu = 0;
                        switch (pilihRekening)
                        {
                        case 1:
                            cout << "uang disetorkan ke rekening anda";
                            ulangMenu = 0;
                            while (ulangMenu < 3)
                            {
                                cout << "Masukkan konfirmasi pin : ";
                                cin >> pin;
                                if (pin == defaultPin)
                                {
                                    saldo = saldo + nominal;
                                    cout << "Saldo anda :" << saldo << endl;
                                    cout << "Transaksi BERHASIL" << endl;
                                    cout << "Apakah anda ingin melakukan transaksi lainnya\n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                                    cin >> pilih;
                                    if (pilih != 0)
                                    {
                                        ulangMenu = 3;
                                    }
                                    else
                                    {
                                        ulangMenu = 3;
                                        ulang = 3;
                                    }
                                }
                                else
                                {
                                    ulangMenu++;
                                    if (ulangMenu == 3)
                                    {
                                        cout << "ATM anda terblokir \n";
                                    }
                                    else
                                    {
                                        cout << "PIN SALAH !!!\n";
                                        cout << "ANDA sudah memasukan pin salah sebanyak :" << ulangMenu << endl;
                                    }
                                }
                            }
                            break;

                        case 2:
                            cout << "uang akan disetorkan ke rekening lain\n";
                            cout << "mamsukkan no rekening tujuan :";
                            cin >> noRek;
                            if (noRek == defaultNoRekA || noRek == defaultNoRekB)
                            {
                                ulangMenu = 0;
                                while (ulangMenu < 3)
                                {
                                    cout << "Masukkan pin untuk konfirmasi : \n";
                                    cin >> pin;
                                    if (pin == defaultPin)
                                    {
                                        cout << "Transaksi BERHASIL \n";
                                        cout << "Apakah anda ingin melakukan transaksi lainnya :\n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            ulangMenu = 3;
                                        }
                                        else
                                        {
                                            ulangMenu = 3;
                                            ulang = 3;
                                        }
                                    }
                                    else
                                    {
                                        ulangMenu++;
                                        if (ulangMenu == 3)
                                        {
                                            cout << "ATM anda terblokir" << endl;
                                            ulang = 3;
                                        }
                                        else
                                        {
                                            cout << "Anda sudah memasukan pin salah sebanyak : " << ulangMenu << endl;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                cout << "No rekening tidak tujuan tidak ditemukan";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    else
                    {
                        cout << "Nominal harus pecahan 100 \n";
                    }
                    break;

                case 5:
                    cout << "Menu virtual Account" << endl;
                    cout << "Masuk Kode virtual account : ";
                    cin >> kodeTransaksi;
                    if (kodeTransaksi == transaksiA)
                    {
                        cout << "Kode transaksi anda adalah : " << transaksiA << endl;
                        cout << "Harga barang yang anda beli : " << harga << endl;
                        saldo = saldo - harga;
                        cout << "Tranasaksi berhasil" << endl;
                    }
                    else
                    {
                        cout << "kode transaksi tidak ditemukan \n";
                        cout << "Apakah anda ingin melakukan transaksi lainnya: \n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                        cin >> pilih;
                        if (pilih == 0)
                        {
                            ulang = 3;
                        }
                    }
                    break;

                case 0:
                    cout << "Exit" << endl;
                    ulang = 3;
                    break;

                default:
                    pilih = 0;
                    ulang = 3;
                    break;
                }
            }
        }
        else
        {
            cout << "PIN yang anda masukkan salah \n";
            ulang++;
            if (ulang == 3)
            {
                cout << "ATM Anda terblokir\n";
            }
        }
    }
    cout << "Program Selesai";
    return 0;
}