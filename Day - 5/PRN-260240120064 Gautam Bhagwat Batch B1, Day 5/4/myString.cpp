#include <iostream>
#include <cstring>
#include "myString.h"
using namespace std;

MyString::MyString(const MyString &other) {
    size = other.size;
    p = new char[size];
    strcpy(p, other.p);
}

MyString::MyString(const char *str) {
    size = strlen(str) + 1;
    p = new char[size];
    strcpy(p, str);
}

void MyString::display() {
    if (p != nullptr) {
        cout << p << endl;
    } else {
        cout << "[Empty String]" << endl;
    }
}

MyString::~MyString() {
    delete[] p;
}
