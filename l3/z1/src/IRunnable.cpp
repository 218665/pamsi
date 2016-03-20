#include "../inc/IRunnable.hh"


bool IRunnable::run()
{
  if(Runner.find(klucz)>0)
    return true;
  else 
    return false;
}

bool IRunnable::prepare(int size)
{
  Runner.reset(); 
  if(Runner.load("test.doc", size)){
    klucz = Runner.get(rand()%size);
    return true;
  }
  else return  false;
}
