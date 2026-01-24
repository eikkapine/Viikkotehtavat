#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int makePizza(int flour, int water);

public:
    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string inputPassword, int flour, int water);
};

#endif
