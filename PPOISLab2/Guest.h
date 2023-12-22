#ifndef GUEST_H
#define GUEST_H
#include "Person.h"

class Guest : public Person {
private:
    std::string preferences;

public:
    Guest(const std::string& _name, const std::string& _contactInfo, const std::string& _preferences);
    virtual ~Guest() = default;

    void reserveRoom();
    void orderFood();
    void useSpaServices();
};
#endif