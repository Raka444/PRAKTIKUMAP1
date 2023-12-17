#include<iostream>

int main() {
    // Deklarasi variabel
    int x, y, temp;

    // Input dua bilangan
    std::cout << "Masukkan nilai X: ";
    std::cin >> x;

    std::cout << "Masukkan nilai Y: ";
    std::cin >> y;

    // Tukar nilai
    temp = x;
    x = y;
    y = temp;

    // Output hasil pertukaran
    std::cout << "Setelah pertukaran, nilai X = " << x << " dan nilai Y = " << y << std::endl;

    return 0;
}
