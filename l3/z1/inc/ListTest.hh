#ifndef LISTTEST
#define LISTTEST
#include "List.hh"
#include "IRunnable.hh"
#include <string>
class ListTest: public List<string>, public IRunnable
{
private:
  string klucz;
public:
  bool load(std:: string TytulKsiazki, int LiczbaElementow);
  void display();
  void reset();
  int find(string item);
  bool run();
  bool prepare(int size);
};


#endif
