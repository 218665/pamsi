#ifndef GRAPH_HH
#define GRAPH_HH
#include "IGraph.hh"
class Graph:public IGraph
{
private:
  List<int> Verticies;
  int rozmiarMacierzy = 10;
  int** Macierz;
public:
  Graph();
  virtual ~Graph()
  {for (int i =0; i<rozmiarMacierzy; ++i) delete [] Macierz[i];
  delete [] Macierz;}
  virtual void addVertex(int x);
  virtual void addEdge(int x, int y);
  virtual int removeVertex(int x);
  virtual int removeEdge(int x, int y);
  virtual List getNeighbours(int x);
};

#endif
