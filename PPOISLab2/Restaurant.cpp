#include "Restaurant.h"
#include <iostream>

const std::string& Restaurant::getName() const {
    return name;
}

Restaurant::Restaurant(const std::string& _name, const std::string& _menu)
    : name(_name), menu(_menu), isOpen(true) {}

void Restaurant::takeOrders() {
    std::cout << "Restaurant " << name << " takes orders." << std::endl;
}

void Restaurant::prepareDishes() {
    std::cout << "Restaurant " << name << " prepares dishes." << std::endl;
}

void Restaurant::processOrders() {
    std::cout << "Restaurant " << name << " processes orders." << std::endl;
}
