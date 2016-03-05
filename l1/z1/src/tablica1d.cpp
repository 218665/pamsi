#include "../inc/tablica1d.hh"
#include <iostream>
using namespace std;

void tablica1D::Wypisz()
{
  for(int i=0; i< _rozmiar; ++i)
    cout << _tablica_ptr[i]<<' ';
  cout << endl;
}

void tablica1D::DodajElement(int Element)
{
  
  if(_index < _rozmiar-1) _tablica_ptr[++_index]=Element;

  else {
    ZwiekszRozmiar();
    reAlokuj();
    _tablica_ptr[++_index]=Element ;
  }

}

void tablica1D::reAlokuj ()
{
  int *tablica_pom;
  tablica_pom = new int [_rozmiar];
  for (int i=0; i<_rozmiar; ++i) tablica_pom[i]=_tablica_ptr[i]; 
  delete [] _tablica_ptr;
  _tablica_ptr = new int [_rozmiar];
  for (int i=0; i < _rozmiar; ++i) _tablica_ptr[i]=tablica_pom[i];
  delete [] tablica_pom;
}
