#ifndef TABLICA1D
#define TABLICA1D
#include "Itablica1d.hh"

template <class Typ>
class tablica1D: public  Itablica1D<Typ>
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
  tablica1D() {TablicaPtr = new Typ [Irozmiar];}
  ~tablica1D() {delete [] TablicaPtr;}


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
