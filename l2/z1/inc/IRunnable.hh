#ifndef IRUNNABLE
#define IRUNNABLE
#include "tablica1dtest.hh"
class IRunnable
{
private:
  tablica1Dtest Runner;
  int dystans;
public:
  bool run();
  bool prepare(int size);
};



#endif
