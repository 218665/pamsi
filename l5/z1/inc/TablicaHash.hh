#ifndef TABL_HASH_HH
#define TABL_HASH_HH
#include "TablicaAsoc.hh"
#include "List.hh"
#define BUCKETS 10000
#include "Node.hh"


template <class Typ>
class TablicaHash
{
private:
  List< Node<Typ> > Tablica[BUCKETS];
  unsigned int hash(string word) const;
public:
  void add(string key ,Typ value);
  Typ get (string key) const;
  Typ& get (string key);
  Typ remove (string key);
  void clear();
  void display();
};

#include "../src/TablicaHash.cpp"



#endif
