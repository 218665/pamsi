#ifndef IQUEUE
#define IQUEUE
/*!
  \file
  \brief Definicja klasy IQueue

  Plik zawiera klase abstrakcyjną, która jest interfejsem kolejki
*/
#include "tablica1d.hh"
#include "Exceptions.hh"
/*!
  \brief Interfejs kolejki

  Kolejka jest strukturą typu FIFO (First-In-Fist-Out).
*/
template <typename Typ>
class IQueue
{
public:
  virtual int size() = 0;
  virtual bool isEmpty() = 0;
  virtual void enqueue(Typ) =0;
  virtual Typ dequeue() = 0;
  virtual Typ front()=0;
  virtual ~IQueue() {};
};

#endif
