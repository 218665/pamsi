#include <iostream>
#include "../inc/tablica1d.hh"
#include <cstdlib>
#define MAXRAND 100
using namespace std;
#define ROZMIAR_TABLICY 1000000
int main()
{
  tablica1D Ex;
  for(int i=0; i<ROZMIAR_TABLICY; ++i)
    {
      Ex.DodajElement(rand() %MAXRAND);
      Ex.Wypisz();
    }
}
