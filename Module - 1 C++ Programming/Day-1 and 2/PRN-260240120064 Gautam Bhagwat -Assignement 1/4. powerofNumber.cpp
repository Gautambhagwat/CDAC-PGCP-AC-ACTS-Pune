#include<iostream>
using namespace std;

int main(){
	int b,n;

	int p = 1;

	cout<<"Enter Base and Exponent: "<<endl;
	cin>>b>>n;

	for(int i = 0;i<n;i++){
		p = p*b;
	}
	cout<<"Power of "<<b<<" raise to "<<n<<" is "<<p;

}
