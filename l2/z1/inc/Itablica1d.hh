#ifndef ITABLICA1D
#define ITABLICA1D
#include <iostream>
using namespace std;

template <class Typ>
class Itablica1D
{
  virtual Typ UsunOstatniElement()=0;
  virtual void DodajElement(Typ)=0;
  virtual Typ operator[](int)=0;
  
};
#endif
