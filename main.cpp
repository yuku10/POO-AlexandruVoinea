#include <iostream>
#include "person.h"
#include "Role.h"
#include <vector>
#include "StudentRole.h"
#include "PersonRep.h"
#include "Room.h"
#include "RoomRep.h"
#include "Activity.h"
#include "ActivityRep.h"
#include "ActivityRole.h"
int main()
{
    std::vector<person*> persons;
   //std::vector<Room*> rooms;
    //std::vector<Activity*>activities;
    persons.push_back(new person("Anca","Mihai"));
    persons[0]->AddRole(new StudentRole());
    std::vector<Room*> rooms;
    //rooms.push_back(new Room("201"));

    return 0;
}
