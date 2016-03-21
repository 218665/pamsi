#ifndef IRUNNABLE
#define IRUNNABLE
#include "tablica1dtest.hh"
#include "ListTest.hh"
class IRunnable
{
private:
  ListTest Runner;
  string klucz;
public:
  bool run();
  bool prepare(int size);
};



#endif
