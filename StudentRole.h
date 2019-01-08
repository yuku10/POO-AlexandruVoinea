#ifndef STUDENTROLE_H_INCLUDED
#define STUDENTROLE_H_INCLUDED
#include "Role.h"
#include "Group.h"

class StudentRole : public Role
{
public:
    StudentRole(int YY, std::string domain, Group* group );
    void setYY(int);
    void setDomain(std::string);
    int getYY();
    std::string getDomain();

private:
    int nYY;
    std::string nDomain;
    Group* nGroup;
};

#endif // STUDENTROLE_H_INCLUDED
