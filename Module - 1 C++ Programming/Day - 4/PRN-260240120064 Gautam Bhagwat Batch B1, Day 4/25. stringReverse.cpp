#include <iostream>
using namespace std;

void reverse(string *str, int size){
    if(size == 0){
        cout<<str[size];
        return;
    }

    cout<<str[size];
    size--;
    reverse(str, size);
    return;
}

void ip(int size){
    string str[size];
    char ch[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter char "<<i+1<<" : "<<endl;
        cin>>ch[i];

        str[i] = ch[i];
    }

    reverse(str, size - 1);
}

int main(){
    int size;
    cout<<"Enter Size of Char array: "<<endl;
    cin>>size;
    ip(size);
    return 0;
}
