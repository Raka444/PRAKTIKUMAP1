#include <iostream>
using namespace std;

int main() {
    int n = 10;  // Jumlah data yang akan dimasukkan
    int bilangan, total = 0, terkecil, terbesar;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan bilangan " << i << " : ";
        cin >> bilangan;

        // Inisialisasi nilai terkecil dan terbesar pada iterasi pertama
        if (i == 1) {
            terkecil = terbesar = bilangan;
        } else {
            if (bilangan < terkecil) {
                terkecil = bilangan;
            }
            if (bilangan > terbesar) {
                terbesar = bilangan;
            }
        }

        total += bilangan;
    }

    double rata_rata = static_cast<double>(total) / n;

    cout << "=====================" << endl;
    cout << "Nilai Rata-rata  = " << rata_rata << endl;
    cout << "Nilai Terbesar  = " << terbesar << endl;
    cout << "Nilai Terkecil  = " << terkecil << endl;

    return 0; 
}

  