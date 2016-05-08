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
  int dystans;
  int *labels;
  int getLabel(int);
  void setLabel(int, int);
  Stack<int> pathDepthFirstSearch ;
  Queue<int> pathBreadthFirstSearch ;
  bool pathDFS(int poczatek, int koniec);
  bool pathBFS(int poczatek, int koniec);
  bool isEdge(int x, int y){return  (bool)Macierz[x][y];}
public:
  virtual bool run();
  virtual bool prepare (int);
  void wypiszMacierz();
  ~GraphTest()
  {
    delete [] labels;
  }

};

#endif
