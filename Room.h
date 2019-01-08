#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include <string>
class Room
{
public:
    Room(){}
    Room(std::string Nume="");
    std::string get_nume();

    friend std::istream& operator>> (std::istream& stream, Room& ob);
    friend std::ostream& operator<< (std::ostream& stream, const Room& ob);

private:
    std::string nName;
};

#endif // ROOM_H_INCLUDED
