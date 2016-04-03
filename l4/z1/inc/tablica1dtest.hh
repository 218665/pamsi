#ifndef TABLICATEST
#define TABLICATEST
#include "tablica1d.hh"



class tablica1Dtest: public tablica1D<int>
{
private:
  int dystans;
public:
  void Wypisz();
  bool WypelnijTablice(int LiczbaElementow);
  void Reset();
  void bubblesort();
};

#endif
