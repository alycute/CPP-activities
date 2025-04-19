#include <iostream>
using namespace std;

int main() {
	int time, hr, min;

	cout<<"enter time in 24hr format: \n";
	cin>>time;

	min = time % 100;
	hr = (time - min) / 100;

	if (hr > 12) {
		cout<< hr - 12<< ": " << min << " PM"; 
	} else {
		cout<< hr << ": " << min << " AM"; 
	}

    return 0;
}
