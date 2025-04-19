#include <iostream>
using namespace std; 
int main() {
	int range;
	
	cout<<"Range: ";
	cin>>range;
	
    for (int i = 1; i <= range; i++) {
        for (int j = 1; j <= range - i + 1; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

