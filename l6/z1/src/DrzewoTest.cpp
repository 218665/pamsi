#include "../inc/DrzewoTest.hh"
#include <cmath>
void DrzewoTest::Wypisz()
{
  int j=0;
  int k=0;
  for(int i=1; i<=drzewko.Index();  ++i)
  {
    ++k;
    cout<<drzewko[i]<<" ";
    if(k == pow(2,j))
    {
      ++j;
      k=0;
      cout<<endl;
    }
  }
  cout<<endl;
}

void DrzewoTest::clear()
{
  while(drzewko.Index()>0)
    drzewko.UsunElement();
}

void DrzewoTest::inOrder(int index)
{
  if(hasLeft(index))
    inOrder(index*2);
  Pomocnicza.DodajElement(visit(index));
  if(hasRight(index))
    inOrder(index*2+1);
}

void DrzewoTest::reBalance()
{
  inOrder(1);
  clear();
  wypelnijDrzewo(0, Pomocnicza.Index());
}

void DrzewoTest::wypelnijDrzewo(int left, int right)
{
  if (left <= right)
  {
    int i = left + (right - left)/2;
    insert(Pomocnicza[i]);
    wypelnijDrzewo(left, i-1);
    wypelnijDrzewo(i+1, right);
  }
}

bool DrzewoTest::prepare(int size)
{
  rozmiar = size;
  drzewko.DodajElement(0,size);
  clear();
  while (Pomocnicza.Index()>0)
    Pomocnicza.UsunElement();
  for(int i = 1; i <=size; ++i)
  {
    Pomocnicza.DodajElement(i);
  }
  wypelnijDrzewo(0, Pomocnicza.Index());
  return true;
}

bool DrzewoTest::run()
{
  int index = 1;
  int wanted = rand() % rozmiar +1;
  if(rozmiar == 1e8) wanted = rand() % rozmiar /100 +1;
  // int wanted = rozmiar;
  while(drzewko[index] !=0)
  {
    if (drzewko[index] < wanted) index = index*2 + 1;
    else if (drzewko[index] > wanted) index = index*2;
    else if(drzewko[index] == wanted) return true;
  }
  return false;
}
