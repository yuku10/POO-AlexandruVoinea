#ifndef ROOMREP_H_INCLUDED
#define ROOMREP_H_INCLUDED
#include <vector>
#include "Room.h"
class RoomRep{
private:
    std::vector<Room*>r;
public:
    Room*findByName(std::string Name);
    void add(Room* room);
    void remove(std::string Name);
};


#endif // ROOMREP_H_INCLUDED
