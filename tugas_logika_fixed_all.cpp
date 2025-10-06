#include <iostream>
using namespace std;


// variable sesuai soal
int pesanan_a;    
int jenis_a;
int pesanan_b;
int jenis_b;
int kue_tambahan;
int jenis_kue_tambahan;

// harga & diskon default
int harga_baki = 25000;
int harga_pcs = 250;
float diskon= 0.1;

// variable rumus
float total_baki_a;
float total_baki_b;
float total_kue_tambahan;
float duit_di_terima;

void set_harga() {
    cout << "=== TEMPAT ATUR HARGA & DISKON ===\n";
    cout << "Masukan Harga Kue / Baki : ";
    cin >> harga_baki;
    cout << "Harga Kue / Pcs : ";
    cin >> harga_pcs;
    cout << "Masukan Diskon Jika Membeli Lebih 2 Baki (Default 0.1 = 10%) : ";
    cin >> diskon;
    cout << "Berhasil Setting Harga dan diskon!";
}

int main() {
    set_harga(); // pangge fungsi set harga

    //program input 
    cout << "\n\nMasukan jumlah Pesanan Baki A : ";
    cin >> pesanan_a;
    cout << "Masukan jumlah jenis kue di Pesanan Baki A : ";
    cin >> jenis_a;
    cout << "Masukan jumlah Pesanan Baki B : ";
    cin >> pesanan_b;
    cout << "Masukan jumlah jenis kue di Pesanan Baki B : ";
    cin >> jenis_b;

    cout << "Masukan jumlah kue tambahan per jenis: ";
    cin >> kue_tambahan;
    cout << "Masukan jumlah jenis kue tambahan: ";
    cin >> jenis_kue_tambahan;

    // hitung pesanan A
    if (pesanan_a > 2) {
        total_baki_a = pesanan_a * jenis_a * harga_baki * (1 - diskon); //fyi 1-diskon berarti ambe sisa 90% total harga diskon
    } else {
        total_baki_a = pesanan_a * jenis_a * harga_baki;
    }
    // hitung pesananan B 
    if (pesanan_b > 2) {
        total_baki_b = pesanan_b * jenis_b * harga_baki * (1 - diskon); //fyi 1-diskon berarti ambe sisa 90% total harga diskon
    } else {
        total_baki_b = pesanan_b * jenis_b * harga_baki;
    }

    // hitung kue tambahan
    total_kue_tambahan = kue_tambahan * jenis_kue_tambahan * harga_pcs;
    duit_di_terima = total_baki_a + total_baki_b + total_kue_tambahan;

    cout << "Duit Yang Di Terima Adalah : Rp " << duit_di_terima << endl;

    return 0;
}
