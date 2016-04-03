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
 
  void Realokuj(int Pozycja){
    Typ* TablicaPomocnicza = new Typ [Irozmiar];
    for (int i = 0; i < Pozycja; ++i ) TablicaPomocnicza[i] = TablicaPtr[i];
    for (int i = Pozycja + 1; i <=index; ++i) TablicaPomocnicza[i] = TablicaPtr[i-1];
    delete [] TablicaPtr;
    TablicaPtr = TablicaPomocnicza;
  }

  void ZwiekszRozmiar(){ Irozmiar*=2;}
public:
  tablica1D() {TablicaPtr = new Typ [Irozmiar];}
  ~tablica1D() {delete [] TablicaPtr;}
  int Index() {return index;}

  void DodajElement (Typ Element){
    if ( index >= Irozmiar -1) {
      ZwiekszRozmiar();
      Realokuj();
    }
    TablicaPtr[++index] = Element;
  }
 

  void DodajElement (Typ Element, int indexElementu){
    if(indexElementu >= index){
      if ( indexElementu >= Irozmiar -1) {
	while (indexElementu >= Irozmiar -1) ZwiekszRozmiar();
	Realokuj(indexElementu);
      }
      index = indexElementu;
      TablicaPtr[index] = Element;
    }
    else{
      if(++index >= Irozmiar)
	ZwiekszRozmiar();
      Realokuj(indexElementu);
      TablicaPtr[indexElementu]=Element;
    } 
  }


  Typ operator [](int N){  if (N >= Irozmiar) return 0; else return TablicaPtr[N];}


  Typ UsunElement() {
    Typ Element;
    if (index >= 0){
      Element = TablicaPtr[index];
      --index;
    }
    else return 0;
    return Element;
  }

  Typ UsunElement(int indexElementu) {
    Typ Element;
    if (index >= 0 && index >= indexElementu){
      Element = TablicaPtr[indexElementu];
      --index;
      for (int i = indexElementu; i <= index; ++i){
	TablicaPtr [i] = TablicaPtr[i+1]; 
      }
    }
    else if(index >= 0 && indexElementu == 0){
      Element = TablicaPtr[0];
      delete TablicaPtr;
      ++TablicaPtr;
    }
    else return 0;
    return Element;
  }


};

#endif
