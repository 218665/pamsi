#include <iostream>
#include "../inc/tablica1dtest.hh"
using namespace std;
#define LAPS 10
#define ELEM 5

int main()
{
  tablica1Dtest tablica;
  
  tablica.WypelnijTablice(21);
  tablica.Wypisz();
  tablica.bubblesort();
  tablica.Wypisz();

}

