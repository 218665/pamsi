#ifndef I_TABL_ASOC_HH
#define I_TABL_ASOC_HH
#include <string>
using namespace std;

template <class Typ>
class ITablicaAsoc
{
public:
  virtual Typ operator [] (string) const=0 ;
  virtual Typ& operator [] (string)=0 ;
  virtual void add ( string, Typ) = 0;
  virtual Typ remove(string)=0;
};

#endif
