#ifndef ITABLICA1D
#define ITABLICA1D
#include <iostream>
using namespace std;

template <class Typ>
class Itablica1D
{
public:
  virtual Typ UsunElement()=0;
  virtual Typ UsunElement(int)=0;
  virtual void DodajElement(Typ, int)=0;
  virtual void DodajElement(Typ)=0;
  virtual Typ operator [] (int) const=0 ;
  virtual Typ& operator [] (int) = 0;
  virtual int Index() const =0;
  virtual ~Itablica1D() {};
};
#endif
