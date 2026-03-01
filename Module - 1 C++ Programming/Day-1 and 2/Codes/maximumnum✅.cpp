#include<iostream>
using namespace std;

int maximumnumber(int num1,int num2){
    //return num1>num2?num1:num2;
    if(num1>num2){
       return num1;
    }else{
	    //if(){}
            //else{} 
       return num2;
    }
}
int findmax(int x,int y,int z){
    if((x>y) && (x>z)){
       return x;
    }else if((y>x) && (y>z)){
       return y;

    }else{
	    return z;
    }


}
int main(){
  int x=34, y=50,z=56;
  //accept x and y from keyboard
  int maxnum=maximumnumber(x,y);
  int max3=findmax(x,y,z);
  cout<<"maximum number : "<<maxnum<<endl;
  cout<<" Maximum of 3 numbers" <<max3<<endl;
  return 0;
}
