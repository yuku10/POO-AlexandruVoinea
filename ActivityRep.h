#ifndef ACTIVITYREP_H_INCLUDED
#define ACTIVITYREP_H_INCLUDED
#include "Activity.h"
#include "Rep.h"
class ActivityRep : public Rep<Activity>
{
public:
    Activity* findByOwner(person*);
    Activity* findByLocation(Room*);
    Activity* findByDescription(std::string);

};

#endif // ACTIVITYREP_H_INCLUDED

