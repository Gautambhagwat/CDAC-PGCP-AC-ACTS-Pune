#include<iostream>
using namespace std;

void swapNumbers(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	
	int a, b;

	cout<<"Enter two Numbers: "<<endl;
	cin>>a>>b;

	cout<<"Before Swaping"<<a<<" ,"<<b<<endl;
	
	swapNumbers(&a, &b);
	cout<<"After Swaping"<<a<<" ,"<<b<<endl;

	return 0;
}
