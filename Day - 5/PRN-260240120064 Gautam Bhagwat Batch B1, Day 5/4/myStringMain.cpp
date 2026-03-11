#include <iostream>
#include "myString.h"
using namespace std;

int main() {
    MyString s1("Kajal");
    s1.display();

    MyString s2 = s1;
    s2.display();

    return 0;
}
