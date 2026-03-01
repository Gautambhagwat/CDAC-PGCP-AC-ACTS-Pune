#include<iostream>
using namespace std;

void myfunction(){
auto z='A';
int y=23;
static int x=10;
y++;
x++;
cout<<"in myfunction y: "<<y<<endl;
cout<<"in myfunction x: "<<x<<endl;
}

int main(){
   myfunction();
   myfunction();
   myfunction();
}
