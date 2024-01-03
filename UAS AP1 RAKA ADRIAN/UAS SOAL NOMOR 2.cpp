 #include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct "Anak"
struct Anak {
    string nama;
    int tanggal_lahir;
};

int main() {
    const int JUMLAH_ANAK= 20;

    // Membuat array dari struct "ANAK"
    Anak daftarAnak[JUMLAH_ANAK];

    // Mengisi nilai untuk setiap Anak
    for (int i = 0; i < JUMLAH_ANAK; ++i) {
        cout << "Masukkan nama anak ke-" << i + 1 << ": ";
        cin >> daftarAnak[i].nama;

        cout << "Masukkan tanggal lahir anak ke-" << i + 1 << ": ";
        cin >> daftarAnak[i].tanggal_lahir;
    }

    // Menampilkan informasi setiap anak
    cout << "\nInformasi anak:\n";
    for (int i = 0; i < JUMLAH_ANAK; ++i) {
        cout << "Anak" << i + 1 << ":\n";
        cout << "Nama: " << daftarAnak[i].nama << endl;
        cout << "Tanggal lahir: " << daftarAnak[i].tanggal_lahir << endl; 
    }

    return 0;
}
