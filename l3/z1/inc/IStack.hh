#ifndef ISTACK
#define ISTACK
#include "Itablica1d.hh"
template <typename Typ>
class IStack
{
protected:
  Itablica1D <Typ> Tablica;
public:
  int size();
  bool isEmpty();
  void push(Typ item);
  Typ pop()
    throw (EmptyStackException);
  Typ top()
    throw (EmptyStackException);
};


#endif
