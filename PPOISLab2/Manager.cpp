#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& _name, const std::string& _contactInfo)
    : Employee(_name, _contactInfo, "Manager") {}

void Manager::manageBookings() {
    std::cout << position << " " << name << " manages bookings." << std::endl;
}

void Manager::serveGuests() {
    std::cout << position << " " << name << " serves guests." << std::endl;
    manageBookings();
}

void Manager::handleComplaints() {
    std::cout << position << " " << name << " handles complaints." << std::endl;
}
