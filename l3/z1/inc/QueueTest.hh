#ifndef QUEUETEST
#define QUEUETEST

#include "Queue.hh"
#include "IRunnable.hh"
class QueueTest: public Queue<int>, public IRunnable
{
public:
  void fill(int LiczbaElementow);
  void display();
  bool prepare(int size){return true;}
  bool run(){return true;}
    
};

#endif
