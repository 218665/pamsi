#ifndef IQUEUE
#define IQUEUE
#include "Itablica1d.hh"
template <typename Typ>
class IQueue
{
protected:
  Itablica1D <Typ> Tablica;
public:
  int size();
  bool isEmpty();
  void enqueue(Typ item);
  Typ dequeue()
    throw (EmptyQueueException);
  Typ front()
    throw (EmptyQueueException);
};

#endif
