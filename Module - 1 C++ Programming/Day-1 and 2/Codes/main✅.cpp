#include<iostream>
using namespace std;

extern int count ;  
extern void write_extern();    
int main()
{
   int x=20;
   cout<<(x++ + --x);
   count = 5;
   write_extern(); 
   return 0;
}

