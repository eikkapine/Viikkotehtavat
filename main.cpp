#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

int main() {
    Notifikaattori notif;

    Seuraaja s1("Matti");
    Seuraaja s2("Liisa");
    Seuraaja s3("Pekka");

    notif.lisaa(&s1);
    notif.lisaa(&s2);
    notif.lisaa(&s3);

    std::cout << "Seuraajat:" << std::endl;
    notif.tulosta();

    std::cout << "\nPostitus:" << std::endl;
    notif.postita("Uusi päivitys julkaistu!");

    std::cout << "\nPoistetaan Liisa\n" << std::endl;
    notif.poista(&s2);

    std::cout << "Seuraajat nyt:" << std::endl;
    notif.tulosta();

    std::cout << "\nUusi postitus:" << std::endl;
    notif.postita("Toinen viesti!");

    std::cout << "\nPress Enter to exit...";
    std::cin.get();

    return 0;
}
