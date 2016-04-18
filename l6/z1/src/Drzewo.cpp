#include "../inc/Drzewo.hh"

void Drzewo::insert(int Element)
{
  drzewko.DodajElement(Element);
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
  return drzewko[index];
}
