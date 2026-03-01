#include<iostream>
using namespace std;

int binarySum(int x, int y){
	while(y != 0){
	int carry = x & y;
	x = x^y;
        y = carry<<1;
	
	}
	return x;
}

int main(){
	

	int x, y;
	cout<<"Enter 2 Numbers: "<<endl;
	cin>>x>>y;
	
	cout<<"Binary Sum is: "<<binarySum(x, y)<<endl;
	return 0;
}
