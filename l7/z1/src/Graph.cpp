#include "../inc/Graph.hh"

Graph::Graph()
{
  *Macierz = new int* [rozmiarMacierzy];

  for(int i =0; i < rozmiarMacierzy) Macierz[i]= new int [rozmiarMacierzy];
}
