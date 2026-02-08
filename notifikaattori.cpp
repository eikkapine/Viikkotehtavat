#include "notifikaattori.h"
#include <iostream>

void Notifikaattori::lisaa(Seuraaja* s) {
    if (!s) return;

    s->next = seuraajat;
    seuraajat = s;
}


void Notifikaattori::poista(Seuraaja* s) {
    if (!seuraajat || !s) return;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        s->next = nullptr;
        return;
    }

    Seuraaja* nykyinen = seuraajat;

    while (nykyinen->next != nullptr) {
        if (nykyinen->next == s) {
            nykyinen->next = s->next;
            s->next = nullptr;
            return;
        }
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta() const {
    Seuraaja* o = seuraajat;

    while (o != nullptr) {
        std::cout << o->getNimi() << std::endl;
        o = o->next;
    }
}

void Notifikaattori::postita(const std::string& viesti) const {
    Seuraaja* o = seuraajat;

    while (o != nullptr) {
        o->paivitys(viesti);
        o = o->next;
    }
}
