#ifndef TABLICATEST
#define TABLICATEST
#include "tablica1d.hh"

class tablica1Dtest: public tablica1D
{
public:
  void Wypisz();
  bool WypelnijTablice(int LiczbaElementow);
  void Reset();
};

#endif
