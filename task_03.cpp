#include <iostream>
using namespace std;

class Character {
protected:
    string character;
    int health;
    int damage;

public:
    Character(string character, int health, int damage) {
        this->character = character;
        this->health = health;
        this->damage = damage;
    }

    virtual void move() {
        cout << character << " is moving" << endl;
    }

    virtual void kill() {
        cout << character << " has been killed" << endl;
    }
};


class Player : public Character {
public:
    Player(string character, int health, int damage) : Character(character, health, damage) {}

    void move() override {
        cout << character << " is walking" << endl;
    }


};

class Enemy : public Character {
public:
    Enemy(string character, int health, int damage) : Character(character, health, damage) {}


    void move() override {
        cout << character << " is moving towards the player" << endl;
    }

    void kill() override {
        cout << character << " has killed the player" << endl;
    }
};

int main() {

    Player* character = new Player("Player 1", 100, 10);
    Enemy* enemy = new Enemy("Enemy 1", 50, 5);

    character->move();
    character->kill();

    enemy->move();
    enemy->kill();

    delete character;
    delete enemy;

    return 0;
}
