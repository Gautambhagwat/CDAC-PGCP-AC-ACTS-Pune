#include<iostream>
using namespace std;

void swapNumbers(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;

    cout<<"after swaping x: "<<x<<" and y: "<<y<<endl;
}

int main(){
    int a = 24;
    int b = 79;
    cout<<"Before Swapping x: "<<a<<" and y: "<<b<<endl;
    swapNumbers(a,b);
}
