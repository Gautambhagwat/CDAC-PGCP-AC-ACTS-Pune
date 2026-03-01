#include<iostream>
using namespace std;

int digitSum(int n){
	int sum = 0;
	if(n == 0)
		return 0;
	
	return (n%10) + digitSum(n/10);
}

int main(){

	int n;
	cout<<"Enter a 4 digit Number: "<<endl;
	cin>>n;

	cout<<"Digit Sum of"<<n<<" is "<<digitSum(n)<<endl;
	return 0;
}
