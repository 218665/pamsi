#ifndef STOPER
#define STOPER
#include "IStoper.hh"
#include <ctime>
#include <chrono>
class Stoper: public IStoper
{
private:
  std::chrono::steady_clock::time_point startTime;
  std::chrono::steady_clock::time_point stopTime;
  bool isWork = false;
public:
  virtual  void start() {  startTime = std::chrono::steady_clock::now();isWork =true;}
  virtual void stop();
  virtual double getElapsedTime() {return  std::chrono::duration_cast<std::chrono::nanoseconds>(stopTime - startTime).count();}
  virtual bool dumpToFile(ofstream& Plik);
};
#endif
