// #include <string>
// #include <iostream>
// #include "../../model/modelTiket.h"

// void vAddTiket(string inpNikTiket)
// {
//     string inpNamaBus, inpTempatKeberangkatan, inpTujuan;
//     int inpJumlahTIKET, inpHargaTotal;
//     cout << "Nama BUS : ";
//     cin >> inpNamaBus;
//     cout << "Tempat keberangkatan : ";
//     cin >> inpTempatKeberangkatan;
//     cout << "Tujuan : ";
//     cin >> inpTujuan;
//     cout << "Jumlah Tiket : ";
//     cin >> inpJumlahTIKET;
//     int indexJadwal;
//     indexJadwal = mSearchJadwalForBus(inpNamaBus);
//     if (jumlahKursi[indexJadwal] >= inpJumlahTIKET)
//     {
//         for (jumlahKursi[indexJadwal]; inpJumlahTIKET <= jumlahKursi[indexJadwal]; jumlahKursi[indexJadwal]--)
//         {
//             cout << "Nomer Kursi Anda adalah :";
//             cin >> jumlahKursi[indexJadwal];
//             jumlahKursi[indexJadwal] = jumlahKursi[indexJadwal] - inpJumlahTIKET;
//         }
//     }
//     cout << "Harga Total :";
//     cin >> inpHargaTotal;
//     maddUserTIKET()
// }