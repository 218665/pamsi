#ifndef TABLICA1D
#define TABLICA1D
#include <cstdlib>

class tablica1D
{
private:
  int* tablica_ptr;
  int rozmiar = 10;
  int index = -1;
public:
  tablica1D()  {tablica_ptr = new int [rozmiar];} //konstruktor
  ~tablica1D() {delete [] tablica_ptr;} //destruktor
  void Wypisz(); //Wypisywanie elementów tablicy
  void DodajElement(int Element);
  
};
#endif
