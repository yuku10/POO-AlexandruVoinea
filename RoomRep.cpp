#include "RoomRep.h"
Room*RoomRep::findByName(std::string Name)
{
    for(unsigned int i=0;i<nActiv.size();i++)
        if(nActiv[i]->get_nume()==Name)
            return nActiv[i];
    return NULL;
}
