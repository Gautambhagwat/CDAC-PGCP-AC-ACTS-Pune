#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    int rollNo;
    char sName[20];
    char sCourse[20];

public:
    Student() {
        rollNo = 0;
        sName[0] = '\0';
        sCourse[0] = '\0';
    }

    Student(int roll, const char *name, const char *course) : rollNo(roll) {
        strcpy(sName, name);
        strcpy(sCourse, course);
    }

    int getRollNo() {
        return rollNo;
    }

    char* getSName() {
        return sName;
    }

    void setStudentInfo() {
        cout << "Enter the student roll no: " << endl;
        cin >> rollNo;

        cout << "Enter the student name: " << endl;
        cin >> sName;

        cout << "Enter the course name: " << endl;
        cin >> sCourse;
    }

    void display() {
        cout << "Student roll No: " << rollNo << ", Student name: " << sName << ", Course: " << sCourse << endl;
    }
};

void findStudent(int roll, Student *s) {
    for (int i = 0; i < 2; i++) {
        if (s[i].getRollNo() == roll) {
            cout << s[i].getSName() << endl;
        }
    }
}

int main() {
    Student s1(78, "Manoj", "AC");
    s1.display();

    Student *s = new Student[2];

    for (int i = 0; i < 2; i++) {
        s[i].setStudentInfo();
    }

    for (int i = 0; i < 2; i++) {
        s[i].display();
    }

    int roll;
    cout << "Enter the roll no to find student: " << endl;
    cin >> roll;

    findStudent(roll, s);

    delete[] s;

    return 0;
}
