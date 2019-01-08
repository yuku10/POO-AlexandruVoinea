#include "Room.h"
std::string Room::get_nume()
{
    return nName;
}

Room::Room(std::string name)
{
    nName = name;
}


std::istream& operator>> (std::istream& stream, Room& ob)
{
    stream >> ob.nName;
    return stream;
}
/*
std::ostream& operator<< (std::ostream& stream, const Room& ob)
{
    stream << ob.nName << '\n';
    return stream;
}
*/
