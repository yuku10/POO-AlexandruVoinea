#include "Discipline.h"

Discipline::Discipline(std::string lesson, std::string classroom, std::vector<Activity*> Activ)
{
    nLesson = lesson;
    nClassroom = classroom;
    nActivity = Activ;
}

std::string Discipline::getLesson()
{
    return nLesson;
}

std::string Discipline::getClassroom()
{
    return nClassroom;
}

void Discipline::setLesson(std::string Les)
{
    nLesson = Les;
}

void Discipline::setClassroom(std::string Cls)
{
    nClassroom = Cls;
}

std::istream& operator >> (std::istream& stream, Discipline& ob)
{
    stream >> ob.nLesson;
    stream >> ob.nClassroom;
    return stream;
}

std::ostream& operator << (std::ostream& stream, const Discipline& ob)
{
    stream << ob.nLesson;
    stream << ob.nClassroom;
    return stream;
}
