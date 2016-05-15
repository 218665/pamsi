#include "../inc/GraphTest.hh"
#include <climits>
void GraphTest::wypiszMacierz()
{
  for (int i = 0; i < rozmiarMacierzy; ++i)
  {
    for(int j = 0; j < rozmiarMacierzy; ++j) cout<< Macierz[i][j]<<" ";
    cout << endl;
  }
}

int GraphTest::BB(int start, int stop)
{
  int best = INT_MAX;
  int rozwiniecia=0;
  int syn=0, ojciec=0, wartosc=0;
  IQueue<int>* ojcowie = new Queue<int>();
  IQueue<int>* synowie = new Queue<int>();
  IQueue<int>* wartosci = new Queue<int>();
  synowie -> enqueue (start);
  ojcowie -> enqueue(start);
  wartosci -> enqueue(0);
  while(!ojcowie->isEmpty())
  {
    syn = synowie -> dequeue();
    wartosc = wartosci -> dequeue();
    ojciec = ojcowie ->dequeue();
    for (int i = 0; i< rozmiarMacierzy; ++i)
    {
      if((Macierz[syn][i] > 0)&&(i!=ojciec))
      {
        if(wartosc < best)
        {
          rozwiniecia++;
          synowie -> enqueue(i);
          wartosci-> enqueue(Macierz[i][syn]+wartosc);
          ojcowie -> enqueue(syn);
          if ((i == stop) && (Macierz[i][syn]+wartosc < best ))
          {
             best = wartosc + Macierz[i][syn];
          }
          //wartosc = Macierz[ojciec][i];
        }
      }
    }
  }
  cout << "Liczba rozwinięć: "<< rozwiniecia << endl;
  delete synowie; delete ojcowie; delete wartosci;
  return best;
}


int GraphTest::branchAndBoundWithExtendedList(int start, int stop)
{
//branch&branchAndBoundWithExtendedList
int best = INT_MAX;
int rozwiniecia=0;
int syn=0, ojciec=0, wartosc=0;
IQueue<int>* ojcowie = new Queue<int>();
IQueue<int>* synowie = new Queue<int>();
IQueue<int>* wartosci = new Queue<int>();
synowie -> enqueue (start);
ojcowie -> enqueue(start);
wartosci -> enqueue(0);
while(!ojcowie->isEmpty())
{
  syn = synowie -> dequeue();
  wartosc = wartosci -> dequeue();
  ojciec = ojcowie ->dequeue();
  for (int i = 0; i< rozmiarMacierzy; ++i)
  {
    if((kopiaMacierzy[syn][i] > 0)&&(i!=ojciec))
    {
      if(wartosc < best)
      {
        rozwiniecia++;
        synowie -> enqueue(i);
        wartosci-> enqueue(Macierz[i][syn]+wartosc);
        ojcowie -> enqueue(syn);
        if ((i == stop) && (Macierz[i][syn]+wartosc < best ))
        {
           best = wartosc + Macierz[i][syn];
        }
        if (i!=stop)
        {
          kopiaMacierzy[syn][i]=0; kopiaMacierzy[i][syn]=0;
        }
      }
    }
  }
}
cout << "Liczba rozwinięć: "<< rozwiniecia << endl;
for(int i=0; i< rozmiarMacierzy;++i)  delete[] kopiaMacierzy[i];
delete[] kopiaMacierzy;
delete synowie; delete ojcowie; delete wartosci;
return best;
}

bool GraphTest::prepare(int size)
{
  // kopiaMacierzy = new int*[size];
  // for(int i=0; i<size; ++i)
  // {
  //   kopiaMacierzy[i] = new int [size];
  // }
  for (int i = 0; i< rozmiarMacierzy; ++i) delete[] Macierz[i];
  delete [] Macierz;
  Macierz = new int* [size];
  for (int i = 0; i < size; ++i) Macierz[i] = new int [size];
  rozmiarMacierzy =size; dystans = size;
  for (int i =0; i<size; ++i)
  {
    for (int j=i; j<size; ++j)
    {

      Macierz[j][i] = rand() %10;
      Macierz[i][j] = Macierz[j][i];
      // kopiaMacierzy[i][j]=Macierz[i][j];
      // kopiaMacierzy[j][i]=Macierz[j][i];
    }
  }
  return true;
}

bool GraphTest::run()
{
  if(BB(rand()%dystans, rand()%dystans)!=INT_MAX)
  {
    return true;
  }
  return false;
}
