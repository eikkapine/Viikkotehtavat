#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "[DEBUG] Chef constructor: " << chefName << endl;
}

Chef::~Chef() {
    cout << "[DEBUG] Chef destructor: " << chefName << endl;
}

int Chef::makeSalad(int ingredients) {
    cout << "[DEBUG] makeSalad(" << ingredients << ")" << endl;
    return ingredients / 5;
}

int Chef::makeSoup(int ingredients) {
    cout << "[DEBUG] makeSoup(" << ingredients << ")" << endl;
    return ingredients / 3;
}
