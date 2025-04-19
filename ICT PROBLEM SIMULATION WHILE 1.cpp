#include<iostream>
using namespace std;

int main(){
	int a = 1, b = 10;
	
	while(a <5){
		b = b-a;
		a = a+ 1;
	}
	
	cout<<a<<" "<<b;
	return 0;
}
