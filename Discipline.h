#ifndef DISCIPLINE_H_INCLUDED
#define DISCIPLINE_H_INCLUDED

#include "Activity.h"
#include <vector>
#include<string>

class Discipline
{
public:
    Discipline(){};
    Discipline(std::string lesson, std::string classroom, std::vector<Activity*> Activ);

    std::string getLesson();
    std::string getClassroom();

    void setLesson(std::string);
    void setClassroom(std::string);

    friend std::istream& operator >> (std::istream& stream, Discipline& ob);
    friend std::ostream& operator << (std::ostream& stream, const Discipline& ob);

private:
    std::string nLesson;
    std::string nClassroom;
    std::vector<Activity*> nActivity;
    int nPres;
};


#endif // DISCIPLINE_H_INCLUDED
