#ifndef LISTTEST
#define LISTTEST
#include "List.hh"

class ListTest: public List
{
public:
  bool load(std:: string TytulKsiazki, int LiczbaElementow);
  void display();
  void reset();
  int find(string item);
};


#endif
