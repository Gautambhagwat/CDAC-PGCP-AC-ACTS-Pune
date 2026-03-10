#include<iostream>
using namespace std;

void prtstr(int size){
    string name[size];

    for(int i = 0; i<size; i++){
        cout<<"Enter the "<<i + 1<<" name: "<<endl;
        cin>>name[i];
    }

    for(int i = 0; i<size; i++){
        cout<<"Name of no "<<i + 1<<" student is: "<<name[i]<<endl;
    }
}

int main(){
    int size;
    cout<<"Enter Size: "<<endl;
    cin>>size;

    prtstr(size);
    return 0;
}
