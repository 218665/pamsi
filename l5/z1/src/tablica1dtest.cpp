#include "../inc/tablica1dtest.hh"
#include <cstdlib>
#define MAXRAND 100
void tablica1Dtest::Reset()
{
  delete [] TablicaPtr;
  Irozmiar=10;
  index=-1;
  TablicaPtr = new int [Irozmiar];
}

void tablica1Dtest::Wypisz()
{
  for (int i=0; i<=index; ++i)
    cout << (*this)[i] <<" ";
  cout<<endl;
}

bool tablica1Dtest::WypelnijTablice(int LiczbaElementow)
{
  try
    {
      for (int i=0; i < LiczbaElementow; ++i)
	DodajElement(rand()%MAXRAND);
    }
  catch(...)
    {
      return false;
    }
  return true;
}

bool tablica1Dtest::run()
{
  if(WypelnijTablice(dystans))
    return true;
  else 
    return false;
}

bool tablica1Dtest::prepare(int size)
{
  Reset(); 
  dystans = size;
  return true;
}

