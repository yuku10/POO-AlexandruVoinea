#include "StudentRole.h"

StudentRole::StudentRole(int  YY= 0, std::string domain = "INFO", Group* group = NULL)
    : Role(STUDENT_ROLE)
{
    nYY = YY;
    nDomain = domain;
    nGroup = group;
}

void StudentRole::setYY(int YY)
{
    nYY = YY;
}

void StudentRole::setDomain(std::string domain)
{
    nDomain = domain;
}

int StudentRole::getYY()
{
    return nYY;
}

std::string StudentRole::getDomain()
{
    return nDomain;
}
