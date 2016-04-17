#ifndef TABLICATEST
#define TABLICATEST
#include "tablica1d.hh"
#include "IRunnable.hh"


class tablica1Dtest: public tablica1D<int>, public IRunnable
{
private:
  int dystans;
public:
  void Wypisz();
  bool WypelnijTablice(int LiczbaElementow);
  void Reset();
  bool run();
  bool prepare(int);
};

#endif
