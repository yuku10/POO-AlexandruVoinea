#ifndef ACTIVITYREP_H_INCLUDED
#define ACTIVITYREP_H_INCLUDED
#include "Activity.h"
class ActivityRep{
public:
    Activity* findByOwner(person*);
    Activity* findByLocation(Room*);
    Activity* findByDescription(std::string);
private:
    std::vector<Activity*>nActiv;
};

#endif // ACTIVITYREP_H_INCLUDED
