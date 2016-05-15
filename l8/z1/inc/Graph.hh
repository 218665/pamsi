#ifndef GRAPH_HH
#define GRAPH_HH
#include "IGraph.hh"
#include <cstring>
class Graph:public IGraph
{
protected:
  int rozmiarMacierzy = 10;
  int** Macierz;

  void powiekszMacierz();
public:
  Graph()
  {
    cout << "+++ Graph"<<endl;
    Macierz = new int* [rozmiarMacierzy];
    for(int i =0; i < rozmiarMacierzy; ++i) Macierz[i]= new int [rozmiarMacierzy];
  }
  virtual ~Graph()
  {for (int i =0; i<rozmiarMacierzy; ++i) delete [] Macierz[i];
  delete [] Macierz;
  cout << "--- Graph" <<endl;}
  virtual void addVertex(int x);
  virtual void addEdge(int x, int y, int value);
  virtual int removeVertex(int) {return 0;}
  virtual int removeEdge(int, int) {return 0;}
  virtual List<int>* getNeighbours(int x);
};

#endif
