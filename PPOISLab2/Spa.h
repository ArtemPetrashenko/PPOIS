#ifndef SPA_H
#define SPA_H
#include <string>

class Spa {
private:
    std::string serviceType;
    double price;
    bool isOccupied;

public:
    Spa(const std::string& _serviceType, double _price);
    virtual ~Spa() = default;

    virtual void provideServices();
    virtual void manageAccess();
    bool getIsOccupied() const {
        return isOccupied;
    }
};
#endif