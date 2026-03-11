#include <iostream>
#include "player.h"
using namespace std;

int main() {
    Player p1("Manoj", 23, "India");
    Player p2("Shyam", 24, "India");

    p1.display();
    p2.display();

    Player *p = new Player[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter " << i + 1 << " no player info: " << endl;
        p[i].setPlayerInfo();
    }

    for (int i = 0; i < 2; i++) {
        p[i].display();
    }

    return 0;
}
