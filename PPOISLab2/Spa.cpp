#include "Spa.h"
#include <iostream>

Spa::Spa(const std::string& _serviceType, double _price)
    : serviceType(_serviceType), price(_price), isOccupied(false) {}

void Spa::provideServices() {
    isOccupied = true;
    std::cout << "Spa provides services: " << serviceType << std::endl;
}

void Spa::manageAccess() {
    std::cout << "Managing access to spa services." << std::endl;
}