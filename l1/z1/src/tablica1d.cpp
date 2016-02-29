#include "../inc/tablica1d.hh"
#include <iostream>
using namespace std;

void tablica1D::Wypisz()
{
  for(int i; i<rozmiar; ++i)
    cout << tablica_ptr[i]<<' ';
  cout << endl;
}

void tablica1d::DodajElement(int Element)
{
  
}
