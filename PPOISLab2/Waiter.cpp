#include "Waiter.h"
#include <iostream>

Waiter::Waiter(const std::string& _name, const std::string& _contactInfo)
    : Employee(_name, _contactInfo, "Waiter") {}

void Waiter::performTasks() {
    std::cout << position << " " << name << " performs tasks." << std::endl;
    serveGuests();
}
