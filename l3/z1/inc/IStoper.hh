#ifndef ISTOPER
#define ISTOPER
#include "tablica1dtest.hh"
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;
class IStoper
{
private:
  double startTime;
  double stopTime;
  bool isWork = false;
public:
  void start() {startTime = static_cast <double> (clock()); isWork =true;}
  void stop();
  double getElapsedTime() {return (stopTime - startTime)/CLOCKS_PER_SEC;}
  bool dumpToFile(ofstream& Plik);
};



#endif
