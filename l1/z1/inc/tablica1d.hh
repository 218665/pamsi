#ifndef TABLICA1D
#define TABLICA1D
#include <cstdlib>
#define MAX 100
class tablica1D
{
private:
  int* tablica_ptr;
  int rozmiar=10;
public:
  tablica1D()  {tablica_ptr = new int [rozmiar];  for(int i=0 ; i<rozmiar; i++) tablica_ptr[i] = std::rand()%MAX ;} //konstruktor
  ~tablica1D() {delete [] tablica_ptr;} //destruktor
  void Wypisz(); //Wypisywanie elementów tablicy
  void DodajElement(int Element);
  
};
#endif
