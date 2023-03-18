#include<iostream>
using namespace std;

class GameObject {
private:
    int id;
    string name;
    GameObject* next;

public:
    GameObject(int id, string name) {
        this->id = id;
        this->name = name;
        this->next = nullptr;
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    GameObject* getNext() const {
        return next;
    }

    void setNext(GameObject* next) {
        this->next = next;
    }
};
void linkedListUse() {
    GameObject* obj1 = new GameObject(1, "Enemy");
    GameObject* obj2 = new GameObject(2, "Player");
    GameObject* obj3 = new GameObject(3, "Obstacles");

    obj1->setNext(obj2);
    obj2->setNext(obj3);

    GameObject* current = obj1;
    while (current != nullptr) {
        cout << "Object ID " << current->getId() << " is a " << current->getName() << endl;
        current = current->getNext();
    }

    delete obj1;
    delete obj2;
    delete obj3;
}

void healPlayer(int* healthPtr, int amount) {
    *healthPtr += amount;
}
void pointerUse() {
    int health = 100;
    int* healthPtr = &health;

    cout << "Player health: " << *healthPtr << endl;
    healPlayer(healthPtr, 25);
    cout << "Player health after healing: " << *healthPtr << endl;
}
void arrayUse() {

    const int MAX_ENEMIES = 5;
    int enemyHealth[MAX_ENEMIES] = { 100, 200, 150, 120, 180 };
    cout << "Enemy healths: " << endl;
    for (int i = 0; i < MAX_ENEMIES; i++) {
        cout << enemyHealth[i] << " ";
    }
    cout << endl;


}

int main() {
    pointerUse();
    arrayUse();
    linkedListUse();

    return 0;
}