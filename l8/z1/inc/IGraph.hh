#ifndef IGRAPH_HH
#define IGRAPH_HH
#include "List.hh"
class IGraph
{
public:
  virtual ~IGraph() {cout << "--- IGraph" << endl;};
  virtual void addVertex(int) = 0;
  virtual void addEdge(int, int, int) = 0;
  virtual int removeVertex(int) = 0;
  virtual int removeEdge(int, int) = 0;
  virtual List<int>* getNeighbours(int) = 0;
};

#endif
