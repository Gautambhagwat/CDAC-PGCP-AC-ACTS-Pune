#include <iostream>
#include <cstring>
#include "player.h"
using namespace std;

Player::Player() {
    pName[0] = '\0';
    age = 0;
    country[0] = '\0';
}

Player::Player(const char *p, int a, const char *c) {
    strcpy(pName, p);
    age = a;
    strcpy(country, c);
}

void Player::setPlayerInfo() {
    cout << "Enter the Player Name: " << endl;
    cin >> pName;

    cout << "Enter the age: " << endl;
    cin >> age;

    cout << "Enter the country name: " << endl;
    cin >> country;
}

void Player::display() {
    cout << "Name: " << pName << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}
