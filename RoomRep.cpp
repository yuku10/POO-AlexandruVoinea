#include "RoomRep.h"
Room*RoomRep::findByName(std::string Name)
{
    for(unsigned int i=0;i<r.size();i++)
        if(r[i]->get_nume()==Name)
            return r[i];
    return NULL;
}
void RoomRep::add(Room*room)
{
    r.push_back(room);
}
void RoomRep::remove(std::string Name)
{
    for(unsigned int i=0;i<r.size();i++)
        if(r[i]->get_nume()==Name)
            r.erase(r.begin()+i);
}
