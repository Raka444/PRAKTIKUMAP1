#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double panjang, lebar, margin_atas, margin_bawah, margin_kanan, margin_kiri;
  double ukuran_titik;
  char spasi;
  double panjang_efektif = panjang -margin_atas - margin_bawah;
  double lebar_efektif = lebar - margin_kiri - margin_kanan;
  int jumlah_karakter = static_cast<int>(lebar_efektif / ukuran_titik);
  int jumlah_baris = static_cast<int>(panjang / ukuran_titik);
  cout << "masukkan panjang kertas (inci): ";
  cin >> panjang;

  cout << "masukkan lebar kertas (inci): ";
  cin >> panjang;

  cout << "masukkan margin atas (inci): ";
  cin >> panjang;

  cout << "masukkan margin bawah (inci): ";
  cin >> panjang;

  cout << "masukkan margin kiri (inci): ";
  cin >> panjang;

  cout << "masukkan margin kanan (inci): ";
  cin >> panjang;

  cout << "masukkan ukuran titik pada garis (inci): ";
  cin >> panjang;

  cout << "spasi yang di berikan ganda? {y/n}: ";
  cin >> panjang;

  if (spasi == 'y' || spasi == 'y') {
    ukuran_titik *= 2;
  }
  cout << "\n ===== hasil perhitungan =====" << endl;
  cout << "jumlah karakter dalam satu baris: " << jumlah_karakter << endl;
  cout << "jumlah baris yang dapat di cetak: " << jumlah_baris << endl;
  

  
  
  
    
    
  
}