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
  void start() {  startTime = std::chrono::steady_clock::now();isWork =true;}
  void stop();
  double getElapsedTime() {return  std::chrono::duration_cast<std::chrono::microseconds>(stopTime - startTime).count()/1e6;}
  bool dumpToFile(ofstream& Plik);
};
#endif
