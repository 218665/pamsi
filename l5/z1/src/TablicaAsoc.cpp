#include "../inc/TablicaAsoc.hh"

template <class Typ>
Typ TablicaAsoc<Typ>::operator [] (string key) const
{
  return table.get(key);
}

template <class Typ> 
Typ& TablicaAsoc<Typ>::operator [] (string key)
{
  return table.get(key);
}
