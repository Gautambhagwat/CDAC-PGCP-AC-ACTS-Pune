#include <iostream>
#include "dateClass.h"
using namespace std;

Date::Date() {
    dd = 0;
    mm = 0;
    yyyy = 0;
}

Date::Date(int d, int m, int y) {
    dd = d;
    mm = m;
    yyyy = y;
}

Date::~Date() {}

bool Date::isLeap(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::daysInMonth(int m, int y) const {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeap(y)) return 29;
    return days[m];
}

long int Date::totalDays() const {
    long int total = yyyy * 365L + dd;
    for (int i = 0; i < yyyy; i++) if (isLeap(i)) total++;
    for (int i = 1; i < mm; i++) total += daysInMonth(i, yyyy);
    return total;
}

void Date::display() {
    cout << "year: " << yyyy << " month: " << mm << " Day: " << dd << endl;
}

void Date::getTotalDays(Date &d1, Date &d2) {
    long int diff = d1.totalDays() - d2.totalDays();
    cout << "Total days Difference: " << abs(diff) << endl;
}

Date Date::operator-(const Date d1) const {
    long int diff = abs(totalDays() - d1.totalDays());

    int y = diff / 365;
    diff = diff % 365;
    int m = diff / 30;
    int d = diff % 30;

    return Date(d, m, y);
}

bool Date::operator!=(const Date d1) {
    return !compare(d1);
}

bool Date::compare(const Date d1) {
    return (dd == d1.dd && mm == d1.mm && yyyy == d1.yyyy);
}
