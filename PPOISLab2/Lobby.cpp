#include "Lobby.h"
#include <iostream>

Lobby::Lobby() : isOpen(true) {}

bool Lobby::getIsOpen() const {
    return isOpen;
}

void Lobby::welcomeGuests() {
    std::cout << "Lobby welcomes guests." << std::endl;
}

void Lobby::registerGuests() {
    std::cout << "Lobby registers guests." << std::endl;
}

void Lobby::checkGuests() {
    std::cout << "Lobby checks guests." << std::endl;
}
