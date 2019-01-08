#include "person.h"
std::string person::get_cnp()
{
    return nCNP;
}
std::string person::get_fn()
{
    return nFirstName;
}
std::string person::get_ln()
{
    return nLastName;
}
std::string person::get_email()
{
    return nEmail;
}
void person::set_cnp(std::string CNP)
{
    nCNP=CNP;
}
void person::set_fn(std::string FirstName)
{
    nFirstName=FirstName;
}
void person::set_ln(std::string LastName)
{
    nLastName=LastName;
}
void person::set_email(std::string Email)
{
    nEmail=Email;
}
person::person(std::vector<Role*> Roles,std::string CNP,std::string FirstName,std::string LastName,std::string Email):nRoles(Roles),nCNP(CNP),nFirstName(FirstName),nLastName(LastName),nEmail(Email){}


std::istream& operator>>(std::istream& stream,person& a)
{
    stream>>a.nCNP>>a.nFirstName>>a.nLastName>>a.nEmail;
    return stream;
}
std::ostream& operator<<(std::ostream& stream,const person& a)
{
    stream<<a.nCNP<<a.nFirstName<<a.nLastName<<a.nEmail;
    return stream;
}
void person::AddRole(Role* role)
{
    nRoles.push_back(role);
}
