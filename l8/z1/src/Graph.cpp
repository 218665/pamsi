#include "../inc/Graph.hh"

void Graph::addVertex(int x)
{
  while(x>rozmiarMacierzy) powiekszMacierz();
}

void Graph::powiekszMacierz()
{
  int tmp = rozmiarMacierzy;
  rozmiarMacierzy *=2;
  int** MacierzPomocnicza;
  MacierzPomocnicza = new int* [rozmiarMacierzy];
  for(int i =0; i < rozmiarMacierzy; ++i) MacierzPomocnicza[i]= new int [rozmiarMacierzy];

  for(int i = 0; i<tmp; ++i)
  {
    for (int j = 0; j < tmp; ++j)
    {
      MacierzPomocnicza[i][j] = Macierz[i][j];
    }
  }
  for (int i = 0 ; i<tmp; ++i) delete[] Macierz[i];
  delete[] Macierz;
  Macierz = MacierzPomocnicza;
}

void Graph::addEdge(int x, int y, int value)
{
  if ((x < rozmiarMacierzy) && (y < rozmiarMacierzy))
  {
    Macierz[x][y] = value; Macierz[y][x]=value;
  }
  else throw(EmptyGraphException());
}

 List<int>* Graph::getNeighbours(int x)
 {
  List<int>* neighbours = new List<int>();
  int j = 0;
  for(int i=0; i<rozmiarMacierzy; ++i)
  {
    if (Macierz[x][i]) {
      neighbours->add(i, j);
      ++j;
    }
  }
  return neighbours;
 }
