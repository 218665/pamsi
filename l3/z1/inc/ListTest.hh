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

  virtual bool run()
  {
    if(find(klucz)>0)
      return true;
    else 
      return false;
  }

  virtual bool prepare(int size)
  {
    reset(); 
    if(load("test.doc", size)){
      klucz = get(rand()%size);
      return true;
    }
    else return  false;
  }
};


#endif
