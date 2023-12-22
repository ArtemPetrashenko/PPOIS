#ifndef WAITER_H
#define WAITER_H
#include "Employee.h"

class Waiter : public Employee {
private:
    std::vector<std::string> ordersToComplete;

public:
    Waiter(const std::string& _name, const std::string& _contactInfo);
    virtual ~Waiter() = default;

    void performTasks() override;
};
#endif