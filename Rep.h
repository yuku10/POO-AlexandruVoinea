#ifndef REP_H_INCLUDED
#define REP_H_INCLUDED

#include<vector>

template<class T>
class Rep
{
 public:
     void add(T* ob);
     void remove(T* ob);
     void print();

protected:
    std::vector<T*> nActiv;
};


#endif // REP_H_INCLUDED
