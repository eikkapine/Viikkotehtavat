#include "ItalianChef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "[DEBUG] ItalianChef constructor: " << chefName << endl;
}

ItalianChef::~ItalianChef() {
    cout << "[DEBUG] ItalianChef destructor: " << chefName << endl;
}

bool ItalianChef::askSecret(string inputPassword, int flour, int water) {
    cout << "[DEBUG] askSecret()" << endl;

    if (inputPassword == password) {
        cout << "[DEBUG] Password correct" << endl;
        makePizza(flour, water);
        return true;
    }

    cout << "[DEBUG] Password incorrect" << endl;
    return false;
}

int ItalianChef::makePizza(int flour, int water) {
    cout << "[DEBUG] makePizza(" << flour << ", " << water << ")" << endl;

    int pizzas = min(flour / 5, water / 5);
    cout << "[DEBUG] Pizzas made: " << pizzas << endl;

    return pizzas;
}
