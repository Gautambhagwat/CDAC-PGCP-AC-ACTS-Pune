#include <iostream>
#include "dateClass.h"
using namespace std;

int main() {
    Date d1(25, 5, 2015);
    Date d2(26, 9, 2019);

    Date d3 = d2 - d1;
    d3.display();

    Date::getTotalDays(d1, d2);
    if (d1 != d2) {
        cout << "Dates are not equal!" << endl;
    }

    return 0;
}
