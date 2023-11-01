

#include <iostream>

int main() {
    // Tabungan dalam mata uang asing
    double dollarBalance = 12000.0;  // US Dollar
    double euroBalance = 20000.0;    // Euro

    // Kurs mata uang
    double usdToIdrExchangeRate = 15000.0;  // 1 US Dollar to Rupiah
    double euroToUsdExchangeRate = 0.997;   // 1 Euro to US Dollar

    // Harga mobil baru dalam Rupiah
    double carPriceInIdr = 425000000.0;

    // Konversi tabungan ke Rupiah
    double dollarInIdr = dollarBalance * usdToIdrExchangeRate;
    double euroInUsd = euroBalance / euroToUsdExchangeRate;
    double euroInIdr = euroInUsd * usdToIdrExchangeRate;

    // Total tabungan dalam Rupiah
    double totalSavingsInIdr = dollarInIdr + euroInIdr;

    // Hitung sisa dana setelah membeli mobil
    double remainingBalance = totalSavingsInIdr - carPriceInIdr;

    std::cout << "Dana Pak Anto setelah konversi ke Rupiah: Rp. " << totalSavingsInIdr << std::endl;
    std::cout << "Sisa dana setelah membeli mobil: Rp. " << remainingBalance << std::endl;

    return 0;
}