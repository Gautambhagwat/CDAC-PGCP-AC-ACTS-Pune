#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int mint;
    int sec;

public:
    Time() {
        hr = 0;
        mint = 0;
        sec = 0;
    }

    Time(int h, int m, int s) {
        hr = h;
        mint = m;
        sec = s;
    }

    void setHour(int h) {
        hr = h;
    }

    void setMint(int m) {
        mint = m;
    }

    void setSec(int s) {
        sec = s;
    }

    void display() {
        cout << "hour: " << hr << ", minute: " << mint << "second: " << sec << endl;
    }

    Time operator-(const Time t1) {
        long long time1 = this->hr * 3600 + this->mint * 60 + this->sec;
        long long time2 = t1.hr * 3600 + t1.mint * 60 + t1.sec;

        long long diff = abs(time1 - time2);

        Time temp;
        temp.hr = diff / 3600;
        diff = diff % 3600;
        temp.mint = diff / 60;
        temp.sec = diff % 60;
        return temp;
    }

    ~Time() {}

    static bool compare(Time t1, Time t2) {
        return (t1.hr == t2.hr && t1.mint == t2.mint && t1.sec == t2.sec);
    }
};

int main() {
    Time t1;
    Time t2(7, 32, 56);

    t1.setHour(8);
    t1.setMint(46);
    t1.setSec(56);

    t1.display();
    t2.display();

    Time t3 = t1 - t2;

    if (Time::compare(t1, t2)) {
        cout << "Times are equal." << endl;
    } else {
        cout << "Times are not equal." << endl;
    }

    t3.display();

    return 0;
}
