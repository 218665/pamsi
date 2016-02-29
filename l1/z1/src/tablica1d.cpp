#include "../inc/tablica1d.hh"
#include <iostream>
using namespace std;

void tablica1D::Wypisz()
{
  for(int i; i<rozmiar; ++i)
    cout << tablica_ptr[i]<<' ';
  cout << endl;
}

void tablica1D::DodajElement(int Element)
{
  int *tablica_pom;
  if(index<rozmiar) tablica_ptr[++index]=Element;
  else {
    tablica_pom = new int [rozmiar];
    for (int i=0; i<rozmiar; ++i) tablica_pom[i]=tablica_ptr[i]; // spróbować konstruktor kopiujący
    delete [] tablica_ptr;
    tablica_ptr = new int [++rozmiar];
    for (int i=0; i<rozmiar; ++i) tablica_ptr[i]=tablica_pom[i];
    tablica_ptr[++index]=Element;
  }
}
