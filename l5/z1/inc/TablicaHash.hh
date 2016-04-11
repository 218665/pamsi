#ifndef TABL_HASH_HH
#define TABL_HASH_HH
#include "TablicaAsoc.hh"
#include "List.hh"
#define BUCKETS 5
class TablicaHash: public TablicaAsoc
{
private:
  List* Tablica[BUCKETS];
  int hash(string);
public:
  virtual string operator [] (string);
  virtual string& operator [] (string);
}


#endif
