#include "PersonRep.h"
void PersonRep::Add(person* p)
{
    pers.push_back(p);
}
void PersonRep::Remove(std::string email)
{
    for(unsigned int i=0;i<pers.size();i++)
        if(pers[i]->get_email()==email)
            pers.erase(pers.begin()+i);
}
person * PersonRep::findByLastName(std::string lName)
{
    for(unsigned int i=0;i<pers.size();i++)
        if(pers[i]->get_ln()==lName)
            return pers[i];
        return NULL;
}
person * PersonRep::findByCNP(std::string CNP)
{
    for(unsigned int i=0;i<pers.size();i++)
        if(pers[i]->get_cnp()==CNP)
            return pers[i];
        return NULL;
}
