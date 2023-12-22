#include "Guest.h"
#include <iostream>

Guest::Guest(const std::string& _name, const std::string& _contactInfo, const std::string& _preferences)
    : Person(_name, _contactInfo), preferences(_preferences) {}

void Guest::reserveRoom() {
    std::cout << name << " reserved a room." << std::endl;
}

void Guest::orderFood() {
    std::cout << name << " ordered food." << std::endl;
}

void Guest::useSpaServices() {
    std::cout << name << " used spa services." << std::endl;
}
