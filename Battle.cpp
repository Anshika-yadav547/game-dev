#include<iostream>
#include<string>
using namespace std;

class Player {
    public:
    string name;
    int health;
    int attack;

    Player(string n, int h, int a) {
        name = n;
        health = h;
        attack = a;
    }

void displayStats() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl; 
}
void takeDamage(int damage) {
    health -= damage;
}
bool isAlive() {
    return health > 0;
}
};
class Enemy {
    public:
    string name;
    int health;
    int attack;

    Enemy(string n, int h, int a) {
        name = n;
        health = h;
        attack = a;
    }

void displayStats() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl; 
}
void takeDamage(int damage) {
    health -= damage;
}
bool isAlive() {
    return health > 0;
}
};
int main() {
    Player p1("Vasu",95,90);
    Enemy e1("Kans",95,89);
    p1.displayStats();
    e1.displayStats();
    while (p1.isAlive() && e1.isAlive())
    {
        p1.takeDamage(e1.attack);
        if(!p1.isAlive()) {
            break;
        }
        e1.takeDamage(p1.attack);
        cout << "Player health: " << p1.health << endl;
        cout << "Enemy health: " << e1.health << endl;
    }
    if(p1.isAlive()) {
        cout << "Player wins!" << endl;
    }
    else {
        cout << "Enemy wins!" << endl;
    }
    return 0;
}
