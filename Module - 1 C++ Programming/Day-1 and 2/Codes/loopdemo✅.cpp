#include<iostream>
using namespace std;

//calculate factorial of a number
int calc_factorial(int num1){
   int i=1,f=1;	
   for(int i=1;i<=num1;i++){
	   f*=i;
   }
   return f;
}

//find addition of digits of a number
int digitaddition(int num1){
  int add=0;
  while(num1>0){
     int d=num1%10; //356   6  last digit of a number
     num1=(int)(num1/10);   //35
     add=add+d;   //add+=d;
  }
  return add;
}

//print table of a given number
void printtable(int n){
   for(int i=1;i<=10;i++){
      cout << n<<"*"<<i<<" = "<<n*i;
   }

}

int main(){
  int choice,num1,fact,addition;
  do{ 
  cout<<"1. factorial"<<endl<<"2.find digit addition"<<endl<<"3. Print table"<<endl;
  cout<<"4. exit"<<endl<<"choice: ";
  cin>>choice;
  switch(choice){
    case 1:
	    cout<<"Enter a number";
	    cin>>num1;
	    fact=calc_factorial(num1);
	    cout<<"Factorial of "<<num1<<": "<<fact<<endl;
	    break;
    case 2:
	    cout<<"Enter a number";
	    cin>>num1;
	    addition=digitaddition(num1);
	    cout<<"digit addition of "<<num1<<":"<<addition<<endl;

	    break;
    case 3:
	    cout<<"Enter a number";
	    cin>>num1;
	    printtable(num1);
	    break;
    case 4:
	    //exit(0);
	    cout<<"Thank you for visiting"<<endl;
	    break;
    default:
	    cout<<"Wrong choice"<<endl;
  
  }
  }while(choice!=4);
  return 0;
}
