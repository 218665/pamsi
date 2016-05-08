#include "../inc/GraphTest.hh"

void GraphTest::wypiszMacierz()
{
  for (int i = 0; i < rozmiarMacierzy; ++i)
  {
    for(int j = 0; j < rozmiarMacierzy; ++j) cout<< Macierz[i][j]<<" ";
    cout << endl;
  }
}

bool GraphTest::pathDFS(int poczatek, int koniec)
{
  setLabel(poczatek, ODWIEDZONY);
  if (poczatek == koniec) return true;
  for (int i =0; i< rozmiarMacierzy; ++i)
  {
    if (isEdge(i, poczatek))
    {
      if (getLabel(i) == NIEZNALEZIONE)
      {
        setLabel(i, ZNALEZIONE);
        pathDepthFirstSearch.push(i);
        if(pathDFS(i, koniec))
          return true;
        pathDepthFirstSearch.pop();
      }
      else setLabel(i, POWROTNY);
    }
  }
  return false;
}

bool GraphTest::pathBFS(int poczatek, int koniec)
{
  pathBreadthFirstSearch.enqueue(poczatek);
  int szukany;
  while (!pathBreadthFirstSearch.isEmpty())
  {
    szukany = pathBreadthFirstSearch.dequeue();
    //cout<< "Odwiedzam " <<  szukany << endl;;
    if (szukany == koniec) return true;
    setLabel(szukany, ODWIEDZONY);
    for (int i=0; i < rozmiarMacierzy; ++i)
    {
      if (isEdge(i, szukany) && (getLabel(i)==NIEZNALEZIONE))
      {
        pathBreadthFirstSearch.enqueue(i);
        setLabel(i, ODWIEDZONY);
      }
    }
  }
  return false;
}


bool GraphTest::run ()
{
  pathDepthFirstSearch.push(0);
  if(pathDFS(rand()%dystans, rand()%dystans))
  {
    return true;
  }
  return false;
}

void GraphTest::setLabel(int wierzcholek, int etykieta)
{
  if (wierzcholek < rozmiarMacierzy) labels[wierzcholek] = etykieta;
  else throw (EmptyGraphException());
}

int GraphTest::getLabel(int wierzcholek)
{
  if (wierzcholek < rozmiarMacierzy) return labels[wierzcholek];
  else throw (EmptyGraphException());
}

bool GraphTest::prepare(int size)
{
  delete[] labels;
  labels = new int [size];
  for(int i=0; i< rozmiarMacierzy; ++i) labels[i] =0;
  for (int i = 0; i< rozmiarMacierzy; ++i) delete[] Macierz[i];
  delete [] Macierz;
  Macierz = new int* [size];
  for (int i = 0; i < size; ++i) Macierz[i] = new int [size];
  dystans = size; rozmiarMacierzy =size;
  for (int i =0; i<size; ++i)
  {
    for (int j=i; j<size; ++j)
    {
      Macierz[j][i] = rand() %2;
      Macierz[i][j] = rand() %2;
    }
  }
  return true;
}
