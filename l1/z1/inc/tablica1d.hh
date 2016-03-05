#ifndef TABLICA1D
#define TABLICA1D
#include <cstdlib>

class tablica1D
{
private:
  int* _tablica_ptr;
  int _rozmiar = 10;
  int _index = -1;
  
  /*Trzy strategie zwiekszania rozmiaru tablicy
   *Tylko jedna może być nie zakomentowana
   */
  void ZwiekszRozmiar() {++_rozmiar;}
  // void ZwiekszRozmiar() {_rozmiar*=2;}
  //void ZwiekszRozmiar() {++_rozmiar;}
  
  /*Realokacja pamieci
   *Alokujemy na nowo tablice z nowym rozmiarem
   */
  void reAlokuj ();
public:
  tablica1D()  {_tablica_ptr = new int [_rozmiar];} //konstruktor
  ~tablica1D() {delete [] _tablica_ptr;} //destruktor
  int Rozmiar () {return _index+1;}
  void Wypisz(); //Wypisywanie elementów tablicy
  void DodajElement(int Element);
 
  
};
#endif
