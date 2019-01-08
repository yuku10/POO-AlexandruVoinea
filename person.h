#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
#include "Role.h"
#include <vector>
class person{
protected:
    std::string nCNP;
    std::string nFirstName;
    std::string nLastName;
    std::string nEmail;
public:
    person(std::string CNP="",std::string FirstName="",std::string LastName="",std::string Email="");
    std::string get_cnp();
    std::string get_fn();
    std::string get_ln();
    std::string get_email();
    void set_cnp(std::string CNP);
    void set_fn(std::string FirstName);
    void set_ln(std::string LastName);
    void set_email(std::string Email);
friend std::istream& operator>>(std::istream& stream,person& a);
friend std::ostream& operator<<(std::ostream& stream,const person& a);
std::vector<Role*>nRoles;
void AddRole(Role* role);
};

#endif // PERSON_H_INCLUD
