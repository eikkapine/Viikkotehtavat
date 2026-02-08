#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>
#include <iostream>

class Seuraaja {
private:
    std::string nimi;

public:
    Seuraaja* next;

    Seuraaja(const std::string& n)
        : nimi(n), next(nullptr) {}

    std::string getNimi() const {
        return nimi;
    }

    void paivitys(const std::string& viesti) const {
        std::cout << nimi << " sai viestin: " << viesti << std::endl;
    }
};

#endif
