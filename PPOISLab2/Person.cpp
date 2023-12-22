#include "Person.h"

Person::Person(const std::string& _name, const std::string& _contactInfo)
    : name(_name), contactInfo(_contactInfo) {}

std::string Person::getName() const {
    return name;
}

std::string Person::getContactInfo() const {
    return contactInfo;
}
