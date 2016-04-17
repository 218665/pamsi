#ifndef TABL_ASOC_HH
#define TABL_ASOC_HH
#include "ITablicaAsoc.hh"
#include "TablicaHash.hh"

template <class Typ>
class TablicaAsoc: public ITablicaAsoc<Typ>
{
protected:
  TablicaHash<Typ> table;
public:
  virtual Typ operator [] (string) const;
  virtual Typ& operator [] (string);
  virtual void add(string key, Typ value)
  { table.add( key,value);}
  virtual Typ remove(string key)
  {return table.remove( key);}
  
};

#include "../src/TablicaAsoc.cpp"
#endif
