#ifndef ROOM_H
#define ROOM_H
#include <string>

class Room {
private:
    int number;
    std::string roomType;
    double price;
    bool isOccupied;

public:
    Room(int _number, const std::string& _roomType, double _price);
    virtual ~Room() = default;

    virtual void reserveRoom();
    virtual void releaseRoom();
    virtual void checkRoomStatus();
    bool getIsOccupied() const {
        return isOccupied;
    }
   
};

#endif