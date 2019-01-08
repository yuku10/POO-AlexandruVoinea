#ifndef GROUP_H_INCLUDED
#define GROUP_H_INCLUDED
#include "Discipline.h"
#include<vector>
#include<string>

class Group
{
public:
    Group();
    Group(int Group, std::vector<Discipline*> Dis);

    void setGroup(int);
    int getGroup();
    std::vector<Discipline*> getDis();
    std::vector<float> getGrades();
    void addGrade(float grade, std::string subject);

private:
    int nGroup;
    std::vector<Discipline*> nDis;
    std::vector<float> nGrades;
};


#endif // GROUP_H_INCLUDED
