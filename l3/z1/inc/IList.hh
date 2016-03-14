#ifndef ILIST
#define ILIST
#include "Itablica1d.hh"
template <typename Typ>
class IList
{
protected:
  Itablica1D <Typ> Tablica;
public:
  void add (Typ item, int index);
  Typ remove(int index)
    throw (EmptyListException);
  int size();
  bool isEmpty();
  Typ get(int index) 
    throw (EmptyListException);
  
};
  

#endif 
