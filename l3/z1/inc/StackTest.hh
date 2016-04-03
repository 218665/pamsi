#ifndef STACKTEST
#define STACKTEST
#include "Stack.hh"
#include "IRunnable.hh"

class StackTest: public Stack<int>, public IRunnable
{
public:
  void display();
  void fill(int LiczbaElementow);
  bool prepare(int size) {return true;}
  bool run() {return true;}
};


#endif 
