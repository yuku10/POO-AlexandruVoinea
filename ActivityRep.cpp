#include "ActivityRep.h"
#include "template.h"
Activity* ActivityRep::findByLocation(Room* r)
{
    for(unsigned int i=0;i<nActiv.size();i++)
        if(nActiv[i]->getRoom()==r)
            return nActiv[i];
        return NULL;
}
Activity* ActivityRep::findByOwner(person* p)
{
    for(unsigned int i=0;i<nActiv.size();i++)
        if(nActiv[i]->getOwner()==p)
            return nActiv[i];
        return NULL;
}
Activity* ActivityRep::findByDescription(std::string desc)
{
    for (unsigned int i = 0; i < nActiv.size(); i++)
        if (nActiv[i]->getDescription() == desc)
            return nActiv[i];
    return NULL;
}
