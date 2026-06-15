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

int main() {
    Player p1("Namo", 95, 100);
    Player p2("Rava", 95, 99);
    p1.displayStats();
    p2.takeDamage(p1.attack);
    p1.isAlive();
    cout << boolalpha;
    cout << "Player 1 is Alive: " <<p1.isAlive() << endl;
}