#ifndef ITABLICA1D
#define ITABLICA1D
#include <iostream>
using namespace std;

template <class Typ>
class Itablica1D
{
  virtual Typ UsunElement()=0;
  virtual Typ UsunElement(int)=0;
  virtual void DodajElement(Typ, int)=0;
  virtual void DodajElement(Typ)=0;
  virtual Typ operator[](int)=0;
  virtual int Index()=0;
  
};
#endif
