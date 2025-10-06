#include <iostream>

using namespace std;
//tipe gaji simpan disini
string tipe;

//gaji disini
int gaji_bulanan = 1400000; //1JT 400RIBU BULANAN
int gaji_mingguan = 350000; //350RIBU MINGGUAN
int gaji_harian = 1000; //1RIBU PERJAM

//potongan
int potongan_mingguan = 70000; // potongan gaji mingguan kalo tidak masuk sehari 

//hari & jam kerja
int hari_kerja;
int jam_kerja;

//lembur
int upah_lembur = 10000; //upah lembur
int jam_lembur;

//rumus
int total_semua;

int main() {
    cout << "Tipe Gajian\n1. bulanan\n2. mingguan\n3. harian\nMasukan Tipe Gajian Kamu : ";
    getline(cin, tipe);

    
    if(tipe == "bulanan") {
        cout << "\nHallo Karyawan Bulanan!\n";
        cout << "Masukan Total Jam Lembur Kamu : ";
        cin >> jam_lembur;
        
        //totalkann
        total_semua = (jam_lembur * upah_lembur) + gaji_bulanan;

        //output
        cout << "Gaji Bulanan Kamu Di Tambah dengan Lembur : Rp." <<total_semua;
    }

    if(tipe == "mingguan") {
        cout << "\nHallo Karyawan Mingguan!\n";
        cout << "Masukan Berapa Hari Kamu Tidak Kerja : ";
        cin >> hari_kerja;
        cout << "Masukan Total Jam Lembur Kamu : ";
        cin >> jam_lembur;
        
        //totalkan
        total_semua = gaji_mingguan - (hari_kerja * potongan_mingguan) + (jam_lembur * upah_lembur);
        cout << "Total Gaji Kamu Sudah Di Potong Dengan Tidak Masuk Kerja, Dan Di Tambahkan Gaji Lembur Adalah :Rp." << total_semua;
    }

    if(tipe == "harian") {
        cout << "\nHallo Karyawan Harian!\n";
        cout << "Masukan Berapa Jam Kamu Kerja : ";
        cin >> jam_kerja;
        cout << "Masukan Total Jam Lembur Kamu : ";
        cin >> jam_lembur;

        //totalkan
        total_semua = (jam_kerja * gaji_harian) + (jam_lembur * upah_lembur);
         cout << "Total Gaji Kamu Sudah Di Potong Dengan Tidak Masuk Kerja, Dan Di Tambahkan Gaji Lembur Adalah :Rp." << total_semua;

    }
   
    
   // cout << "Tipe Gajian Kamu : " << tipe;
    return 0;
}