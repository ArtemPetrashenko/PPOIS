#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <vector>

class Employee : public Person {
protected:
    std::string position;

public:
    Employee(const std::string& _name, const std::string& _contactInfo, const std::string& _position);
    virtual ~Employee() = default;
    std::string getPosition() const {
        return position;
    }
    virtual void performTasks();
    virtual void serveGuests();
};

#endif