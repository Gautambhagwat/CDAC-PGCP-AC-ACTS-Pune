#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    char pName[20];
    int age;
    char country[10];

public:
    Player();
    Player(const char *p, int a, const char *c);
    void setPlayerInfo();
    void display();
};

#endif
