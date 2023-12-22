#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include "Guest.h"
#include <vector>

class Manager : public Employee {
private:
    std::vector<Guest*> managedGuests;

public:
    Manager(const std::string& _name, const std::string& _contactInfo);
    virtual ~Manager() = default;

    void manageBookings();
    void serveGuests() override;
    void handleComplaints();
};
#endif