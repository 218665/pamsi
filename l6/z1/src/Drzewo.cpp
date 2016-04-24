#include "../inc/Drzewo.hh"
#include <cmath>
bool Drzewo::insert(int Element)
{
  int index=1;
  while(drzewko[index] != 0)
  {
    if(Element > drzewko[index]) index = index *2 +1;
    else if(Element < drzewko[index]) index =index*2;
    else return false;
  }
  if (index >= drzewko.Index())
    drzewko.DodajElement(Element, index);
  else
    drzewko[index]=Element;
  return true;
}
int Drzewo::height()
{
  return log2(drzewko.Index());
}
int Drzewo::root()
{
  return drzewko[1];
}

bool Drzewo::isEmpty()
{
  return drzewko.Index() <= 0;
}

bool Drzewo::isExternal(int index)
{
  return !(hasLeft(index) || hasRight(index));
}

bool Drzewo::hasLeft(int index)
{
  return drzewko[index*2]!=0;
}

bool Drzewo::hasRight(int index)
{
  return drzewko[index*2+1]!=0;
}

int Drzewo::visit(int index)
{
  return drzewko[index]; //sprawdzic to
}

int Drzewo::left(int index)
{
  return drzewko[index*2];
}
int Drzewo::right(int index)
{
  return drzewko[index*2+1];
}
bool Drzewo::leftRotate(int indexP)
{
  int indexQ = indexP*2+1; //prawysyn
  drzewko[indexP*2+1]=drzewko[indexQ*2];
  drzewko[indexQ*2] = drzewko[indexP];
  drzewko[indexP]=drzewko[indexQ];
  return indexQ == (indexP*2);
}

bool Drzewo::rightRotate(int indexQ)
{
  int indexP = indexQ*2; //lewysyn
  int P = drzewko[indexQ*2];
  drzewko[indexQ*2]=drzewko[indexP*2+1];
  drzewko[indexP*2+1] = drzewko[indexQ];
  drzewko[indexQ]=P;
  return indexP == (indexQ*2+1);
}
