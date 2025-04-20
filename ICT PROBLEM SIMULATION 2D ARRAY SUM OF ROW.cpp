#include<iostream>
using namespace std;

int main() {
    int arr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

 
    for(int i = 0; i < 3; i++) {
        int sum = 0; 
        for(int j = 0; j < 4; j++) {
            sum += arr2[i][j];
        }
        cout << "Sum of Row " << i + 1 << ": " << sum << endl;
    }

    return 0;
}

