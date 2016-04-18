#ifndef DRZEWO_HH
#define DRZEWO_HH
#include "IDrzewo.hh"
#include "tablica1d.hh"


class Drzewo: public IDrzewo
{
private:
  tablica1D<int> drzewko; 
public:
  Drzewo() {drzewko.DodajElement(0);}
  virtual void insert(int);
  virtual int root();
  virtual bool isEmpty();
  virtual bool isExternal(int);
  virtual bool hasLeft(int);
  virtual bool hasRight(int);
  virtual int visit(int);
};


#endif
