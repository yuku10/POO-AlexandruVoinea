#ifndef ACTIVITY_H_INCLUDED
#define ACTIVITY_H_INCLUDED
#include <string>
#include "Room.h"
#include "person.h"
#include "iostream"
class Activity{
public:
    Activity(){};
    Activity(Room*,person*,std::string);
    Room* getRoom();
    person* getOwner();
    std::string getDescription();
    friend std::istream& operator>>(std::istream& stream, Activity& ob);
    friend std::ostream& operator<<(std::ostream& stream,const Activity& ob)
    {
        std::cout << ob.nDescription << " - ";
    std::cout << *dynamic_cast<Room*> (ob.nLocation);
    std::cout << *dynamic_cast<person*> (ob.nOwner);
    return stream;
    }
private:
    Room* nLocation;
    person* nOwner;
    std::string nDescription;
};

#endif // ACTIVITY_H_INCLUDED
