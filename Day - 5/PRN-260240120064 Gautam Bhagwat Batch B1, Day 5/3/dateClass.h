#ifndef DATE_H
#define DATE_H

class Date {
private:
    int dd;
    int mm;
    int yyyy;

public:
    Date();
    Date(int d, int m, int y);
    ~Date();

    void display();
    bool isLeap(int y) const;
    int daysInMonth(int m, int y) const;
    long int totalDays() const;

    static void getTotalDays(Date &d1, Date &d2);
    bool compare(const Date d1);

    Date operator-(const Date d1) const;
    bool operator!=(const Date d1);
};

#endif
