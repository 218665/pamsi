#ifndef ITABLICA1D
#define ITABLICA1D
#include <iostream>
using namespace std;

template <class Typ>
class Itablica1D
{
protected:
  int Irozmiar=10;
  Typ* TablicaPtr;
  int index=-1;


  void Realokuj(){
    Typ* TablicaPomocnicza = new Typ [Irozmiar];
    for (int i = 0; i <= index; ++i ) TablicaPomocnicza[i] = TablicaPtr[i];
    delete [] TablicaPtr;
    TablicaPtr = TablicaPomocnicza;
  }


  void ZwiekszRozmiar(){ Irozmiar*=10;}
public:
  Itablica1D() {TablicaPtr = new Typ [Irozmiar];}
  ~Itablica1D() {delete [] TablicaPtr;}


  void DodajElement (Typ Element){
    if ( index >= Irozmiar -1) {
      ZwiekszRozmiar();
      Realokuj();
    }
    TablicaPtr[++index] = Element;
  }


  Typ operator [](int N){  if (N >= Irozmiar) return 0; else return TablicaPtr[N];}


  Typ UsunOstatniElement() {
    Typ Element;
    if (index > 0){
      Element = TablicaPtr[index];
      --index;
    }
    else return 0;
    return Element;
  }


};
#endif
