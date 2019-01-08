#ifndef PERSONREP_H_INCLUDED
#define PERSONREP_H_INCLUDED
#include "person.h"
#include <vector>
class PersonRep{
private:
std::vector<person*>pers;
public:
void Add(person* p);
void Remove(std::string);
person* findByLastName(std::string lName);
person* findByCNP(std::string CNP);


};


#endif // PERSONREP_H_INCLUDED
