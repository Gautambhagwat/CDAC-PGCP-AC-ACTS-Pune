#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
        int rollNo;
        char sName[20];
    public:
        Student(){
            sName[0] = '\0';
            rollNo = 0;
        }

        void setRollNo(int roll){
            rollNo = roll;
        }

        void setName(const char *name){
            strcpy(sName, name);
        }

        void setStudentInfo(){
            cout<<"Enter the roll No: "<<endl;
            cin>>rollNo;
            cout<<"Enter the Student Name: "<<endl;
            cin>>sName;
        }

        void display(){
            cout<<"Name: "<<sName<<", Roll No: "<<rollNo<<endl;
        }
};

int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    Student *s = new Student[n];

    for(int i = 0; i < n; i++){
        s[i].setStudentInfo();
    }

    for(int i = 0; i < n; i++){
        s[i].display();
    }

    delete[] s;
    return 0;
}
