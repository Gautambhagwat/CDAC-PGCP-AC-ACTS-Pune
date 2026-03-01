#include<iostream>
using namespace std;

void decToBin(int n){
	
	if(n == 0)
		return;

	decToBin(n/2);
	cout<<n%2;
}

int main(){
	
	int n;
	cout<<"Enter Number: "<<endl;
	cin>>n;

	decToBin(n);
	return 0;
}
