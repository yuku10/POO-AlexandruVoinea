#include "Group.h"

Group::Group(int group, std::vector<Discipline*> Dis)
{
    nGroup = group;
    nDis = Dis;
}

void Group::setGroup(int group)
{
    nGroup = group;
}

int Group::getGroup()
{
    return nGroup;
}

std::vector<Discipline*> Group::getDis()
{
    return nDis;
}

std::vector<float> Group::getGrades()
{
    return nGrades;
}

void Group::addGrade(float grade, std::string lesson)
{
    for(unsigned int i = 0; i < nDis.size(); i++)
        if(nDis[i]->getLesson() == lesson)
        nGrades.push_back(grade);
}
