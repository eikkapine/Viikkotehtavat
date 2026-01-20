#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    cout << "Tervetuloa arvauspeliin!" << endl;

    Game myGame(40);
    myGame.play();

    cout << "Paina Enter lopettaaksesi...";
    cin.ignore();
    cin.get();

    return 0;
}
