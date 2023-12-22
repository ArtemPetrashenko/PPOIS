#include "Reception.h"
#include <iostream>

Reception::Reception(const std::string& _name, const std::string& _contactInfo)
    : Employee(_name, _contactInfo, "Reception") {}

void Reception::welcomeGuests() {
    std::cout << position << " welcomes guests." << std::endl;
}

void Reception::registerGuests() {
    std::cout << position << " registers guests." << std::endl;
}

void Reception::checkGuests() {
    std::cout << position << " checks guests." << std::endl;
}

void Reception::serveGuests() {
    std::cout << position << " serves guests." << std::endl;
    welcomeGuests();
    registerGuests();
    checkGuests();
}
