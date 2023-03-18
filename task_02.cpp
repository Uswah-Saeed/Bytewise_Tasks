#include <iostream>
#include <stack>
using namespace std;

void switchCase() {
    int gameMode = 2;
    switch (gameMode) {
    case 1:
        cout << "Single Player mode selected" << endl;
        break;
    case 2:
        cout << "Multiplayer mode selected" << endl;
        break;

    default:
        cout << "Invalid game mode selected" << endl;
        break;
    }
}
void forIfUse() {
    string const collectibles[4] = { "coin","food", "health", "star" };
    int colSize = sizeof(collectibles) / sizeof(collectibles[0]);
    string takenCollectible = "coin";
    bool collectibleTaken = false;

    for (int i = 0; i < colSize; i++) {
        if (takenCollectible == collectibles[i]) {
            cout << "Collectible already taken!" << endl;
            collectibleTaken = true;
            break;
        }


        if (!collectibleTaken) {
            cout << "collectible added!" << endl;
        }
    }


}
void doWhileUse() {
    int selectedCharacter = 0;
    do {
        cout << "Select a character: 1 for Warrior, 2 for Mage, 3 for Rogue" << endl;
        cin >> selectedCharacter;
    } while (selectedCharacter < 1 || selectedCharacter > 3);
}

int main() {
    int numCoins = 6;
    switchCase();
    forIfUse();
    doWhileUse();

    return 0;
}