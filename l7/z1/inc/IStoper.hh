#ifndef ISTOPER
#define ISTOPER
#include "tablica1dtest.hh"
#include <iomanip>
#include <cstdlib>
#include <fstream>

class IStoper
{

public:
  virtual void start()=0;
  virtual void stop()=0;
  virtual double getElapsedTime() =0;
  virtual bool dumpToFile(ofstream& Plik)=0;
};



#endif
