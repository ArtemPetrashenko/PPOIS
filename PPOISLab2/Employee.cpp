#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& _name, const std::string& _contactInfo, const std::string& _position)
    : Person(_name, _contactInfo), position(_position) {}

void Employee::performTasks() {
    std::cout << position << " " << name << " performs tasks." << std::endl;
}

void Employee::serveGuests() {
    std::cout << position << " " << name << " serves guests." << std::endl;
}
