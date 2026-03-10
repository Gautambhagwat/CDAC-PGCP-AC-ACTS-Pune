#include<iostream>
using namespace std;

void sortArray(int size){
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cout<<"Enter "<<i<<" position value: "<<endl;
        cin>>arr[i];
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"Sorted array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }

    delete[] arr;
}

void printString(int size){
    char ch[size];
    string str[size];

    for(int i = 0; i < size; i++){
        cout<<"Enter Character: "<<endl;
        cin>>ch[i];
        str[i] = ch[i];
    }

    for(int i = 0; i < size; i++){
        cout<<str[i];
    }

    cout<<endl;
}

void avg(int n){
    int value;
    int sum = 0;

    for(int i = 0; i < n; i++){
        cout<<"Enter the "<< i + 1 <<" no value: "<<endl;
        cin>>value;
        sum += value;
    }

    cout<<"Average is: "<<(float)sum / n <<endl;
}

void mult(int n){
    int value;

    for(int i = 0; i < n; i++){
        cout<<"Enter the "<< i + 1 <<" no value: "<<endl;
        cin>>value;
        cout<<value<<" * 2 = "<< value * 2 <<endl;
    }

    cout<<endl;
}

int main(){
    int n;

    do{
        cout<<"1. Sort Array"<<endl;
        cout<<"2. Print String"<<endl;
        cout<<"3. Average"<<endl;
        cout<<"4. Multiply by 2"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Choice: ";
        cin>>n;

        switch(n){
            case 1: {
                int s;
                cout<<"Enter Size of Array: "<<endl;
                cin>>s;
                sortArray(s);
                break;
            }
            case 2: {
                int p;
                cout<<"Enter Size of Array: "<<endl;
                cin>>p;
                printString(p);
                break;
            }
            case 3: {
                int q;
                cout<<"Enter size of n: "<<endl;
                cin>>q;
                avg(q);
                break;
            }
            case 4: {
                int r;
                cout<<"Enter value of n: "<<endl;
                cin>>r;
                mult(r);
                break;
            }
            case 5:
                cout<<"Thank You for Visiting!"<<endl;
                break;

            default:
                cout<<"Wrong Choice"<<endl;
        }

    }while(n != 5);

    return 0;
}
