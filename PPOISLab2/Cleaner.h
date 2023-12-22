#ifndef CLEANER_H
#define CLEANER_H
#include "Employee.h"

class Cleaner : public Employee {
private:
    std::vector<int> roomsToClean;

public:
    Cleaner(const std::string& _name, const std::string& _contactInfo);
    virtual ~Cleaner() = default;

    void performTasks() override;
};

#endif