#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int pr, n;
	double r;

	cout<<"Enter Principal, Rate(in points) and Years"<<endl;
	cin>>pr>>r>>n;

	int CI = pr * (pow((1 + r), n)-1);

	cout<<"Compound Interest is: "<<CI<<endl;
}
