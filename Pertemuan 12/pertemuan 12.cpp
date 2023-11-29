#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Temukan indeks elemen maksimum di sisa array tidak terurut
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Tukar elemen maksimum dengan elemen pertama dari sisa array tidak terurut
        swap(arr[i], arr[maxIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 6;
    int arr[size] = {64, 25, 12, 22, 11, 90};

    std::cout << "Array sebelum diurutkan: ";
    printArray(arr, size);

    selectionSort(arr, size);

    std::cout << "Array setelah diurutkan secara menurun: ";
    printArray(arr, size);

    return 0;
}
