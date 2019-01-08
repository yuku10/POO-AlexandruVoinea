#include "PersonRep.h"

person * PersonRep::findByLastName(std::string lName)
{
    for(unsigned int i=0;i<nActiv.size();i++)
        if(nActiv[i]->get_ln()==lName)
            return nActiv[i];
        return NULL;
}
person * PersonRep::findByCNP(std::string CNP)
{
    for(unsigned int i=0;i<nActiv.size();i++)
        if(nActiv[i]->get_cnp()==CNP)
            return nActiv[i];
        return NULL;
}
