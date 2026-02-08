#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "seuraaja.h"
#include <string>

class Notifikaattori {
private:
    Seuraaja* seuraajat;

public:
    Notifikaattori() : seuraajat(nullptr) {}

    void lisaa(Seuraaja* s);
    void poista(Seuraaja* s);
    void tulosta() const;
    void postita(const std::string& viesti) const;
};

#endif
