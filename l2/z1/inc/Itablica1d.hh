#ifndef ITABLICA1D
#define ITABLICA1D
template <class Typ>
class Itablica1D
{
private:
  int Irozmiar;
protected:
  Typ* TablicaPtr;
  int index=-1;
  void reAlokuj();
  void ZwiekszRozmiar();
public:
  void DodajElement (Typ Element);
  Typ PokazNtyElement(int N);
  Typ UsunOstatniElement();
};
#endif
