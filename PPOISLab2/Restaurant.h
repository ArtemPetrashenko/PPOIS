#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>

class Restaurant {
private:
    std::string name;
    std::string menu;
    bool isOpen;

public:
    Restaurant(const std::string& _name, const std::string& _menu);
    virtual ~Restaurant() = default;
    const std::string& getName() const;
    virtual void takeOrders();
    virtual void prepareDishes();
    virtual void processOrders();
};

#endif