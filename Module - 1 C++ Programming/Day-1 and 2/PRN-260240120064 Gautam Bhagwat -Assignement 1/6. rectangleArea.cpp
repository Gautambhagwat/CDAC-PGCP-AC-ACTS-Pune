#include<iostream>
using namespace std;

int area(int l, int w){
	
	int area = l*w;

	return area;

}
int main(){

	int l, w;

	cout<<"Enter lenght and width: "<<endl;
	cin>>l>>w;

	cout<<"Area of Rectangle is: "<<area(l, w);

	return 0;
}
