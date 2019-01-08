#include "DisciplineRep.h"

Discipline* DisciplineRep::findByLesson(std::string les)
{
    for ( unsigned int i = 0; i < nActiv.size(); i++)
        if (nActiv[i]->getLesson() == les)
            return nActiv[i];
    return NULL;
}

Discipline* DisciplineRep::findByClassroom(std::string cls)
{
    for ( unsigned int i = 0; i < nActiv.size(); i++)
        if (nActiv[i]->getClassroom() == cls)
            return nActiv[i];
    return NULL;
}
