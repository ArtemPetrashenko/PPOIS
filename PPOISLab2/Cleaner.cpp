#include "Cleaner.h"
#include <iostream>

Cleaner::Cleaner(const std::string& _name, const std::string& _contactInfo)
    : Employee(_name, _contactInfo, "Cleaner") {}

void Cleaner::performTasks() {
    std::cout << position << " " << name << " performs tasks." << std::endl;
}
