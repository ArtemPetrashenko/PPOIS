#include "Room.h"
#include <iostream>

Room::Room(int _number, const std::string& _roomType, double _price)
    : number(_number), roomType(_roomType), price(_price), isOccupied(false) {}

void Room::reserveRoom() {
    isOccupied = true;
    std::cout << "Room " << number << " reserved." << std::endl;
}

void Room::releaseRoom() {
    isOccupied = false;
    std::cout << "Room " << number << " released." << std::endl;
}

void Room::checkRoomStatus() {
    std::cout << "Room " << number << " status: " << (isOccupied ? "Occupied" : "Vacant") << std::endl;
}
