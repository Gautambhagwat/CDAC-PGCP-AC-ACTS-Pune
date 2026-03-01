#include<iostream>
using namespace std;
int y=20;  //global variable
int x=100; //global variable

void myfunction(int num1){  //num1 is formal parameter
cout<<"in myfunction"<<y<<","<<num1<<","<<x<<endl;
}
int main(){
    int x=200;  //local variable
    myfunction(10);
    cout<<"in main function"<<x<<endl;  //x will be local variable
    cout<<"in main global variable "<<::x<<endl; //  x will be global variable
    return 0;


}
