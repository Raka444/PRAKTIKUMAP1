#include <iostream>
using namespace std;

int main() {
    // Tarif listrik per VA
    double biaya_900VA = 1350; 
    double biaya_1300VA = 1440; 
    double biaya_2200VA = 1450; 
    double biaya_3500VA = 1500; 

    // Variabel untuk input pengguna
    int daya_listrik, AC, kulkas, setrika, mesin_cuci, lampu, lainnya;

    // Input daya listrik rumah
    cout << "Masukkan daya listrik rumah (900, 1300, 2200, atau 3500 VA): ";
    cin >> daya_listrik;

    // Input penggunaan perangkat elektronik
    cout << "Masukkan penggunaan AC (watt): ";
    cin >> AC;
    cout << "Masukkan penggunaan kulkas (watt): ";
    cin >> kulkas;
    cout << "Masukkan penggunaan setrika (watt): ";
    cin >> setrika;
    cout << "Masukkan penggunaan mesin cuci (watt): ";
    cin >> mesin_cuci;
    cout << "Masukkan penggunaan lampu (watt): ";
    cin >> lampu;
    cout << "Masukkan penggunaan lainnya (watt): ";
    cin >> lainnya;

    // Menghitung penggunaan listrik per hari dalam kWh
    double penggunaan_perhari = (AC + kulkas + setrika + mesin_cuci + lampu + lainnya) / 1000.0;

    // Menghitung penggunaan listrik per bulan dalam kWh
    double penggunaan_perbulan = penggunaan_perhari * 30; 

    // Menghitung biaya total
    double biaya_total = 0.0;
    if (daya_listrik == 900)
        biaya_total = penggunaan_perbulan * biaya_900VA;
    else if (daya_listrik == 1300)
        biaya_total = penggunaan_perbulan * biaya_1300VA;
    else if (daya_listrik == 2200)
        biaya_total = penggunaan_perbulan * biaya_2200VA;
    else if (daya_listrik == 3500)
        biaya_total = penggunaan_perbulan * biaya_3500VA;
    else
        cout << "Daya listrik tidak valid!" << endl;

    // Output biaya pembayaran listrik per bulan
    cout << "Biaya pembayaran listrik per bulan adalah: Rp. " << biaya_total << endl;

    return 0;
}
