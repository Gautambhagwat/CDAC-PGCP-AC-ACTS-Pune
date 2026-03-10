#ifndef MYSTRING_H
#define MYSTRING_H

class MyString {
private:
    char *p;
    int size;

public:
    MyString(const char *str);
    MyString(const MyString& other);

    void display();
    ~MyString();
};

#endif
