#include <iostream>

using namespace std;

int main()
{
    string jawab;
    string id = "Jojo", inputID, idA;
    string defaultPin = "1234", inputPin, pinBaru;
    int pilih, pilihan, salah = 0;
    int durasiMember = 30;
    int point = 1000;
    cout << " ______________________________________\n";
    cout << "|                                      |\n";
    cout << "|           [GYMNASIUM LITE]           |\n";
    cout << "|______________________________________|\n";
    cout << "\n";
    cout << "      Selamat datang di GYMNASIUM      \n";
    cout << "\n";
    cout << "Apakah anda adalah member GYM LITE \n[GUNAKAN HURUF KAPITAL (IYA) atau (TIDAK)]\n jawaban anda :";
    cin >> jawab;
    if (jawab == "IYA")
    {
        cout << "\n";
        cout << "|========================|\n";
        cout << "| Anda adalah member GYM |" << endl;
        cout << "|========================|\n";
        cout << "\n";
        while (salah < 3)
        {
            cout << "Masukkan ID GYM : ";
            cin >> inputID;
            cout << "Masukan PIN anda : ";
            cin >> inputPin;
            if (inputID == id && inputPin == defaultPin)
            {
                do
                {
                    cout << "Pilih menu" << endl;
                    cout << "1. Jadwal Latihan\n";
                    cout << "2. Info Member\n";
                    cout << "3. Durasi atau Paket Member\n";
                    cout << "0. Exit\n";
                    cout << "Menu yang anda pilih : ";
                    cin >> pilih;
                    switch (pilih)
                    {
                    case 1:
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      MINGGU      |\n";
                        cout << "|   TRAINING DAY   |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      SENIN       |\n";
                        cout << "|   TRAINING DAY   |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      SELASA      |\n";
                        cout << "|   TRAINING DAY   |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|       RABU       |\n";
                        cout << "|     REST DAY     |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      KAMIS       |\n";
                        cout << "|   TRAINING DAY   |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      JUMAT       |\n";
                        cout << "|     REST DAY     |\n";
                        cout << "|__________________|\n";
                        cout << "====================\n";
                        cout << "|                  |\n";
                        cout << "|      SABTU       |\n";
                        cout << "|   TRAINING DAY   |\n";
                        cout << "|__________________|\n";
                        break;

                    case 2:
                        cout << "|==========================|\n";
                        cout << "|                          |\n";
                        cout << "| Durasi Member = " << durasiMember << " hari   |\n";
                        cout << "|                          |\n";
                        cout << "|==========================|\n";
                        cout << "Apakah anda ingin kembali kemenu : \n[GUNAKAN HURUF KAPITAL IYA / TIDAK]";
                        cin >> jawab;
                        if (jawab == "IYA")
                        {
                            pilih = 1;
                        }
                        else
                        {
                            pilih = 0;
                            salah = 3;
                        }
                        break;
                    case 3:
                        cout << "|===================================|\n";
                        cout << "|                                   |\n";
                        cout << "|                 1                 |\n";
                        cout << "||=================================||\n";
                        cout << "||             Paket 1             ||\n";
                        cout << "|| Durasi Member  +1tahun          ||\n";
                        cout << "|| Trainer untuk 1 bulan 1x        ||\n";
                        cout << "|| Dapat 1 pack protein perminggu  ||\n";
                        cout << "|| Harga = Rp. 1.440.000,00        ||\n";
                        cout << "||=================================||\n";
                        cout << "|===================================|\n";
                        cout << "|                                   |\n";
                        cout << "|                 2                 |\n";
                        cout << "||=================================||\n";
                        cout << "||             Paket 2             ||\n";
                        cout << "|| Durasi Member  +6bulan          ||\n";
                        cout << "|| Dapat 1 pack protein perminggu  ||\n";
                        cout << "||                                 ||\n";
                        cout << "|| Harga = Rp. 700.000,00          ||\n";
                        cout << "||=================================||\n";
                        cout << "|===================================|\n";
                        cout << "|                                   |\n";
                        cout << "|                 3                 |\n";
                        cout << "||=================================||\n";
                        cout << "||             Paket 3             ||\n";
                        cout << "|| Durasi Member  +3bulan          ||\n";
                        cout << "|| Dapat 2 pack protein            ||\n";
                        cout << "||                                 ||\n";
                        cout << "|| Harga = Rp. 300.000,00          ||\n";
                        cout << "||=================================||\n";
                        cout << "|===================================|\n";
                        cout << "|                                   |\n";
                        cout << "|                 4                 |\n";
                        cout << "||=================================||\n";
                        cout << "||           Paket Bulanan         ||\n";
                        cout << "||  Durasi Member  +1bulan         ||\n";
                        cout << "||                                 ||\n";
                        cout << "||                                 ||\n";
                        cout << "|| Harga = Rp. 100.000,00          ||\n";
                        cout << "||=================================||\n";
                        cout << "Pilih Paket yang anda inginkan \n [Pilih sesuai nomer ] :";
                        cin >> pilihan;
                        switch (pilihan)
                        {
                        case 1:
                            cout << "||=================================||\n";
                            cout << "||             Paket 1             ||\n";
                            cout << "|| Durasi Member  +1tahun          ||\n";
                            cout << "|| Trainer untuk 1 bulan 1x        ||\n";
                            cout << "|| Dapat 1 pack protein perminggu  ||\n";
                            cout << "|| Harga = Rp. 1.440.000,00        ||\n";
                            cout << "||=================================||\n";
                            while (salah < 3)
                            {
                                cout << "Konfirmasi Pembayaran : ";
                                cin >> inputPin;
                                if (inputPin == defaultPin)
                                {
                                    cout << "Pembayaran BERHASIL" << endl;
                                    durasiMember = durasiMember + 365;
                                    cout << "TERIMAKASIH SELAMAT MENIKMATI PERALATAN DISINI " << endl;
                                    pilih = 0;
                                    salah = 3;
                                }
                                else
                                {
                                    salah++;
                                    if (salah == 3)
                                    {
                                        cout << "Akun di tangguhkan \n";
                                        cout << "Tolong panggilkan pegawai disekitar agar akun anda bisa dipakai kembali !" << endl;
                                        pilih = 0;
                                        salah = 3;
                                    }
                                    else
                                    {
                                        cout << "WARNING Anda memasukkan pin salah sebanyak " << salah << "\n";
                                    }
                                }
                            }
                            break;
                        case 2:
                            cout << "||=================================||\n";
                            cout << "||             Paket 2             ||\n";
                            cout << "|| Durasi Member  +6bulan          ||\n";
                            cout << "|| Dapat 1 pack protein perminggu  ||\n";
                            cout << "||                                 ||\n";
                            cout << "|| Harga = Rp. 700.000,00          ||\n";
                            cout << "||=================================||\n";
                            while (salah < 3)
                            {
                                cout << "Konfirmasi Pembayaran : ";
                                cin >> inputPin;
                                if (inputPin == defaultPin)
                                {
                                    cout << "Pembayaran BERHASIL" << endl;
                                    durasiMember = durasiMember + 182;
                                    cout << "TERIMAKASIH SELAMAT MENIKMATI PERALATAN DISINI " << endl;
                                    salah = 3;
                                    pilih = 0;
                                }
                                else
                                {
                                    salah++;
                                    if (salah == 3)
                                    {
                                        cout << "Akun di tangguhkan \n";
                                        cout << "Tolong panggilkan pegawai disekitar agar akun anda bisa dipakai kembali !" << endl;
                                        pilih = 0;
                                        salah = 3;
                                    }
                                    else
                                    {
                                        cout << "WARNING Anda memasukkan pin salah sebanyak " << salah << "\n";
                                    }
                                }
                            }
                            break;
                        case 3:
                            cout << "||=================================||\n";
                            cout << "||             Paket 3             ||\n";
                            cout << "|| Durasi Member  +3bulan          ||\n";
                            cout << "|| Dapat 2 pack protein            ||\n";
                            cout << "||                                 ||\n";
                            cout << "|| Harga = Rp. 300.000,00          ||\n";
                            cout << "||=================================||\n";
                            while (salah < 3)
                            {
                                cout << "Konfirmasi Pembayaran : ";
                                cin >> inputPin;
                                if (inputPin == defaultPin)
                                {
                                    cout << "Pembayaran BERHASIL" << endl;
                                    durasiMember = durasiMember + 90;
                                    cout << "TERIMAKASIH SELAMAT MENIKMATI PERALATAN DISINI " << endl;
                                    pilih = 0;
                                    salah = 3;
                                }
                                else
                                {
                                    salah++;
                                    if (salah == 3)
                                    {
                                        cout << "Akun di tangguhkan \n";
                                        cout << "Tolong panggilkan pegawai disekitar agar akun anda bisa dipakai kembali !" << endl;
                                        pilih = 0;
                                        salah = 3;
                                    }
                                    else
                                    {
                                        cout << "WARNING Anda memasukkan pin salah sebanyak " << salah << "\n";
                                    }
                                }
                            }
                            break;
                        case 4:
                            cout << "||=================================||\n";
                            cout << "||           Paket Bulanan         ||\n";
                            cout << "||  Durasi Member  +1bulan         ||\n";
                            cout << "||                                 ||\n";
                            cout << "||                                 ||\n";
                            cout << "|| Harga = Rp. 100.000,00          ||\n";
                            cout << "||=================================||\n";
                            while (salah < 3)
                            {
                                cout << "Konfirmasi Pembayaran : ";
                                cin >> inputPin;
                                if (inputPin == defaultPin)
                                {
                                    cout << "Pembayaran BERHASIL" << endl;
                                    durasiMember = durasiMember + 30;
                                    cout << "TERIMAKASIH SELAMAT MENIKMATI PERALATAN DISINI " << endl;
                                    pilih = 0;
                                    salah = 3;
                                }
                                else
                                {
                                    salah++;
                                    if (salah == 3)
                                    {
                                        cout << "Akun di tangguhkan \n";
                                        cout << "Tolong panggilkan pegawai disekitar agar akun anda bisa dipakai kembali !" << endl;
                                        pilih = 0;
                                        salah = 3;
                                    }
                                    else
                                    {
                                        cout << "WARNING Anda memasukkan pin salah sebanyak " << salah << "\n";
                                    }
                                }
                            }
                            break;

                        default:
                            cout << "Pilihan Tidak ada anda akan balik ke menu utama " << endl;
                            pilih = 1;
                            break;
                        }
                        break;
                    case 0:
                        salah = 3;
                        break;
                    default:
                        pilih = 0;
                        salah = 3;
                        break;
                    }
                } while (pilih != 0);
            }
            else
            {
                salah++;
                cout << "ID atau PIN salah" << endl;
            }
        }
    }
    else if (jawab == "TIDAK")
    {
        cout << "Anda Bukan Member GYM" << endl;
        cout << "\n";
        cout << "Apakah anda ingin masuk ke GYM \n [y / n] :";
        cin >> jawab;
        if (jawab == "Iya" || jawab == "ya" || jawab == "y")
        {
            cout << "Apakah anda ingin membuat member GYM Lite \n [Gunakan Huruf Kapital cth IYA / TIDAK] : " << endl;
            cin >> jawab;
            if (jawab == "IYA")
            {
                cout << "Masukkan ID baru : ";
                cin >> inputID;
                cout << "Masukkan Pin : ";
                cin >> inputPin;
                pinBaru = inputPin;
                while (pilih != 0)
                {
                    cout << "Konfirmasi masukkan pin ulang : ";
                    cin >> inputPin;
                    if (inputPin == pinBaru)
                    {
                        cout << "Anda sudah membuat member baru" << endl;
                        cout << "Terimakasih telah membuat member baru" << endl;
                        pilih = 0;
                    }
                    else
                    {
                        cout << "Salah pin. Apakah anda ingin megisi kembali pin \n[Gunakan Huruf Kapital cth IYA / TIDAK] :";
                        cin >> jawab;
                        if (jawab == "IYA")
                        {
                            pilih = 1;
                        }
                        else
                        {
                            pilih = 0;
                        }
                    }
                }
            }
            else
            {
            }
        }
        else
        {
            cout << "TERIMAKASIH TELAH BERKUNJUNG";
        }
    }
    else
    {
        cout << "HANYA LEWAT" << endl;
    }
    cout << "Program Selesai";
}