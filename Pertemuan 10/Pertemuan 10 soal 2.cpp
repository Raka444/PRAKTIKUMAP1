#include <iostream>
using namespace std;

int bnry(int arr[], int ukuran, int cari) {
    int kiri = 0;
    int kanan = ukuran - 1;

    for (int i = 0; kiri <= kanan; i++) {
        int tengah = kiri + (kanan - kiri) / 2;

        if (arr[tengah] == cari) {
            return tengah;
        }

        if (arr[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    return -1;
}

int main() {
    const int ukuran = 5;
    int nilai[ukuran];

  for (int i = 0; i < ukuran; i++) {
    cout << "Masukkan bilangan array index ke-" << i <<" :";
        cin >> nilai[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int hasil = bnry(nilai, ukuran, cari);

    if (hasil != -1) {
        cout << "Data ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}