#ifndef TABL_ASOC_HH
#define TABL_ASOC_HH
#include <string>

class TablicaAsoc
{
public:
  virtual string operator [] (string) const =0;
  virtual string& operator [] (string) =0;
};

#endif
