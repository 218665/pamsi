#ifndef DRZEWO_HH
#define DRZEWO_HH
#include "IDrzewo.hh"
#include "tablica1d.hh"


class Drzewo: public IDrzewo
{
protected:
  tablica1D<int> drzewko;
  int height();
public:
  Drzewo() {drzewko.DodajElement(0);}
  virtual bool insert(int);
  virtual int root();
  virtual bool isEmpty();
  virtual bool isExternal(int);
  virtual bool hasLeft(int);
  virtual bool hasRight(int);
  virtual int visit(int);
  virtual int left(int);
  virtual int right(int);
  virtual bool leftRotate(int);
  virtual bool rightRotate(int);
};


#endif
