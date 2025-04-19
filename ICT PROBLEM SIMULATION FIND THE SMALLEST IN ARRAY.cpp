#include <iostream>
using namespace std;

int main() {
	
	int num[5];
	int size = sizeof(num) / sizeof(num[0]);
	int small, index;
	
	for(int i = 0; i < size; i++){
		cout<<"Input a number: ";
		cin>>num[i];
	}
		
	small = num[0];
	index = 0; 
	
	for(int i = 0; i < size; i++){
		if(num[i] < small){
			small = num[i];
			index = i;
		}
	}
	
	
	cout<<"Smallest: "<< small <<endl;
	cout<<"Index: " << index <<endl;
	
	return 0; 
}
