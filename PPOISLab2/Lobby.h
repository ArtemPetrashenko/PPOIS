#ifndef LOBBY_H
#define LOBBY_H
#include <vector>
#include "Guest.h"

class Lobby {
private:
    bool isOpen;
    std::vector<Guest*> servicedGuests;

public:
    Lobby();
    virtual ~Lobby() = default;
    bool getIsOpen() const;
    virtual void welcomeGuests();
    virtual void registerGuests();
    virtual void checkGuests();
};
#endif