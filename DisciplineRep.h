#ifndef DISCIPLINEREP_H_INCLUDED
#define DISCIPLINEREP_H_INCLUDED

#include "Discipline.h"
#include "Rep.h"
#include <vector>

class DisciplineRep : public Rep<Discipline>
{
public:
   Discipline* findByLesson(std::string les);
   Discipline* findByClassroom(std::string cls);


};


#endif // DISCIPLINEREP_H_INCLUDED
