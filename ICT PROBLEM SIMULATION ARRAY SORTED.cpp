#include <iostream>
using namespace std;

int main() {
    int storage[] = {32, 23, 3, 12, 43};
    int size = sizeof(storage) / sizeof(storage[0]);
    int temp;

    // Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (storage[j] > storage[j + 1]) {
                temp = storage[j];
                storage[j] = storage[j + 1];
                storage[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for (int x = 0; x < size; x++) {
        cout << storage[x] << " ";
    }

    return 0;
}

