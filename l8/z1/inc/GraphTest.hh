#ifndef GRAPHTEST_HH
#define GRAPHTEST_HH
#include"Stack.hh"
#include "Graph.hh"
#include "Queue.hh"
#include "IRunnable.hh"
#define NIEZNALEZIONE 0
#define ZNALEZIONE 1
#define POWROTNY 2
#define ODWIEDZONY 3
class GraphTest: public Graph, public IRunnable
{
private:
  int** kopiaMacierzy;
  int dystans;
public:
  void wypiszMacierz();
  int BB (int start, int stop);
  int branchAndBoundWithExtendedList(int start, int stop);
  virtual bool run();
  virtual bool prepare (int size);
};

#endif
