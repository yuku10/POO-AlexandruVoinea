#ifndef ROOMREP_H_INCLUDED
#define ROOMREP_H_INCLUDED
#include <vector>
#include "Room.h"
#include "Rep.h"
class RoomRep:public Rep<Room>
{
public:
    Room*findByName(std::string Name);
};


#endif // ROOMREP_H_INCLUDED
