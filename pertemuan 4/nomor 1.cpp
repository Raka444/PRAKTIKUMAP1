#include <iostream>
using namespace std;

// Konstanta untuk nilai diskon
const double DISCOUNT_10_ROOMS = 0.1;
const double DISCOUNT_20_ROOMS = 0.2;
const double DISCOUNT_30_ROOMS = 0.3;
const double ADDITIONAL_DISCOUNT = 0.05;
const double TAX_RATE = 0.1; // Pajak penjualan 10%

int main() {
    double kamar;
    int banyaknyakamar;
    int durasikamar;

    // Meminta pengguna untuk memasukkan biaya sewa satu kamar, banyaknya kamar, dan durasi
    cout << "Masukkan biaya sewa satu kamar per malam: $";
    cin >> kamar;
    cout << "Banyaknya kamar yang dipesan: ";
    cin >> banyaknyakamar;
    cout << "Durasi kamar yang dipesan (dalam hari): ";
    cin >> durasikamar;

    // Menghitung biaya total kamar sebelum diskon
    double totalRoomCost = kamar * banyaknyakamar * durasikamar;

    // Menghitung diskon berdasarkan jumlah kamar yang dipesan
    double discount = 0.0;
    if (durasikamar >= 10 && banyaknyakamar < 20) {
        discount = totalRoomCost * DISCOUNT_10_ROOMS;
    } else if (banyaknyakamar >= 20 && banyaknyakamar < 30) {
        discount = totalRoomCost * DISCOUNT_20_ROOMS;
    } else if (banyaknyakamar >= 30) {
        discount = totalRoomCost * DISCOUNT_30_ROOMS;
    }

    // Menghitung diskon tambahan jika durasi minimal 3 hari
    if (durasikamar >= 3) {
        discount += totalRoomCost * ADDITIONAL_DISCOUNT;
    }

    // Menghitung pajak penjualan
    double salesTax = totalRoomCost * TAX_RATE;

    // Menghitung jumlah tagihan akhir
    double totalBill = totalRoomCost - discount + salesTax;

    // Menampilkan hasil
    cout << "Biaya total kamar sebelum diskon: $" << totalRoomCost << endl;
    cout << "Diskon: $" << discount << endl;
    cout << "Pajak penjualan (10%): $" << salesTax << endl;
    cout << "Jumlah tagihan akhir: $" << totalBill << endl;

    
}

