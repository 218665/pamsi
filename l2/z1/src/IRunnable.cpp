#include "../inc/IRunnable.hh"


bool IRunnable::run()
{
  if(Runner.WypelnijTablice(dystans))
    return true;
  else 
    return false;
}

bool IRunnable::prepare(int size)
{
  Runner.Reset(); 
  dystans = size;
  return true;
}
