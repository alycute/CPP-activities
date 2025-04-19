#include<iostream>
using namespace std;

int main(){
	int min, max, sum;
	
	cout<<"input min: ";
	cin>>min;

	cout<<"input max: ";
	cin>>max;	
	
	for(int i = min; i < max; i++){
		sum = sum + i;
	}
	cout<<sum;
}
