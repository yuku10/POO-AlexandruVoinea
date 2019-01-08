#include "Activity.h"

Activity::Activity(Room* r, person* p, std::string d):nLocation(r),nOwner(p),nDescription(d){}

Room* Activity::getRoom()
{
    return nLocation;
}

person* Activity::getOwner()
{
    return nOwner;
}

std::string Activity::getDescription()
{
    return nDescription;
}
std::istream& operator>>(std::istream& stream, Activity& ob)
{
    std::cin>>*(dynamic_cast<Room*>(ob.nLocation));
    std::cin>> *dynamic_cast<person*>(ob.nOwner);
    stream>> ob.nDescription;
    return stream;
}


