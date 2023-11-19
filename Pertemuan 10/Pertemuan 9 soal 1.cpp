#include <iostream>
using namespace std;

int main() {
  const int n = 7;
  int arr[n];
  int s;
  for (int i = 0; i < n; i++) {
    cout << "masukkan array untuk indeks ke-" << i << " :";
    cin >> arr[i];
  }
  cout << "angka berapa yang ingin ditemukan";
  cin >> s;

  for (int i = 0; i < n; i++) {
    if (arr[i] == s)
      cout << "angka ditemukan pada indeks ke-" << i << endl;
  }
 return 0;
}
