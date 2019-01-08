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
#include "Discipline.h"
#include "DisciplineRep.h"
#include "Rep.h"
#include "AdminRole.h"
#include "Group.h"
#include "GuestRole.h"
#include "TeacherRole.h"
int main()
{
    PersonRep stud;
    PersonRep teach;
    RoomRep r;
    ActivityRep act;
    DisciplineRep disc;

    //teach.add(new person({new TeacherRole()},"54","Sparanghel","Marcel","spar.marcel@gmail.com"));
    //teach.print();
    //r.add(new Room("Titeica"));
    //r.print();
    //stud.add(new Person({new StudentRole()}, "201", "Voinea", "Alexandru", "alexvoinea@gmail.com"));

    return 0;
}
