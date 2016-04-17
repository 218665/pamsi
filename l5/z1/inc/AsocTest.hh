#ifndef ASOC_TEST_HH
#define ASOC_TEST_HH
#include "TablicaAsoc.hh"
#include "IRunnable.hh"
#include <fstream>
#define MAX 1000000

class AsocTest: public TablicaAsoc<int>, public IRunnable
{
private:
  string wanted;
public:
  AsocTest(){};
  virtual bool prepare(int size);
  virtual bool run();
};

#endif
