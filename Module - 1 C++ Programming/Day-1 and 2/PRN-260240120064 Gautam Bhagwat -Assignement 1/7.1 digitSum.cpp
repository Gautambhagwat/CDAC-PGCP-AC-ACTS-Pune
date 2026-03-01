#include<iostream>
using namespace std;

int digitSum(int n){
	int sum = 0;

	while(n != 0){
		int lastDigit = n%10;
		sum += lastDigit;
		n = n/10;
	}
	return sum;
}

int main(){

	int n;
	cout<<"Enter a 4 digit Number: "<<endl;
	cin>>n;

	cout<<"Digit Sum of"<<n<<" is "<<digitSum(n)<<endl;

	return 0;
}
