#ifndef PERSONREP_H_INCLUDED
#define PERSONREP_H_INCLUDED
#include "person.h"
#include "Rep.h"
#include <vector>
class PersonRep:public Rep<person>
{
public:
person* findByLastName(std::string lName);
person* findByCNP(std::string CNP);


};


#endif // PERSONREP_H_INCLUDED
