#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== Program started ===" << endl;

    Chef chef("Gordon");
    chef.makeSalad(20);
    chef.makeSoup(9);

    ItalianChef italianChef("Mario");
    italianChef.askSecret("pizza", 20, 15);
    italianChef.askSecret("wrong", 20, 15);

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}
