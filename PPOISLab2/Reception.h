#ifndef RECEPTION_H
#define RECEPTION_H
#include "Employee.h"
#include "Guest.h"
#include <vector>

class Reception : public Employee {
private:
    std::vector<Guest*> servicedGuests;

public:
    Reception(const std::string& _name, const std::string& _contactInfo);
    virtual ~Reception() = default;

    void welcomeGuests();
    void registerGuests();
    void checkGuests();
    void serveGuests() override;
};

#endif