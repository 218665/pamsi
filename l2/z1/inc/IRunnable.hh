#ifndef IRUNNABLE
#define IRUNNABLE
#include "tablica1dtest.hh"
class IRunnable
{
public:
  virtual bool run()=0;
  virtual bool prepare(int)=0;
};



#endif
