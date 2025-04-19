#include <iostream>
using namespace std;

int main() {
    int num, digits[10];
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num == 0) {
        cout << "Reversed number: 0" << endl;
        return 0;
    }

    int i = 0;
    while (num) {
        digits[i] = num % 10;
        num /= 10;
        i++;
    }

    cout << "Reversed number: ";
    for (int j = 0; j < i; j++)
        cout << digits[j];
    cout << endl;

    return 0;
}

