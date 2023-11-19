#include <iostream>
using namespace std;

// Fungsi untuk pencarian menggunakan metode sentinel
int sentinelSearch(int arr[], int ukuran, int cari) {
    int terakhir = arr[ukuran - 1]; // Simpan nilai terakhir
    arr[ukuran - 1] = cari; // Set nilai terakhir sebagai sentinel
    int i;
    for (i = 0; arr[i] != cari; i++) {
        // Lakukan pencarian hingga nilai yang dicari ditemukan
    }

    arr[ukuran - 1] = terakhir; // Kembalikan nilai terakhir ke posisi semula

    if (i < ukuran - 1 || arr[ukuran - 1] == cari) {
        return i;
    }

    return -1;
}

int main() {
    const int ukuran = 6;
    int nilai[ukuran];

    // Input nilai ke dalam array
    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan bilangan untuk index ke-" << i << " :";
        cin >> nilai[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int hasil = sentinelSearch(nilai, ukuran, cari);

    if (hasil != -1) {
        cout << "Angka ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Angka tidak ditemukan" << endl;
    }

    return 0;
}