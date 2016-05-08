#ifndef QUEUE
#define QUEUE

/*!
  \file 
  \brief Definicja klasy Queue

  Plik zawiera definicje szablonu klasy IQueue, 
  który jest interfejsem kolejki
*/
#include "IQueue.hh"
/*!
  \brief Szablon kolejki

  Kolejka jest strukturą typu FIFO (First-In-Fist-Out),
  zaimplementowana na tablicy dynamicznej
*/
template <class Typ>
class Queue: public IQueue<Typ>
{
protected:
  tablica1D <Typ> Tablica;
public:
  /*!
    \brief Rozmiar kolejki
    
    Rozmiar kolejki jest liczbą całkowitą liczoną od 0, gdy stos pusty,

    \return Zwraca liczbę elementów zapisanych w kolejce
  */
 virtual int size(){return Tablica.Index() +1;}
 /*!
    \brief Czy pusty?
    
    Sprawdza czy w kolejce znajdują się elementy

    \retval true - kolejka pusty
    \retval false - w kolejce są elementy
  */
  virtual bool isEmpty(){
    if(Tablica.Index() >= 0) return false;
    else return true;
  }

  /*!
    \brief Wkładanie do kolejki
    
    Umieszcza element na końcu kolejki

    \param[in] item - element, który chcemy umieścić w kolejce
  */
  virtual void enqueue(Typ item)
  {
    Tablica.DodajElement(item);
  }
  /*!
    \brief Wychodzenie z kolejki
    
    Usuwa element z poczatku kolejki
    \exception EmptyQueueException wyjątek pustej kolejki
    \return Zwraca usunięty element
  */
  virtual Typ dequeue()
    throw (EmptyQueueException)
  {
    
    if (Tablica.Index() < 0) throw EmptyQueueException();
    else 
      return Tablica.UsunElement(0);
  }
    /*!
    \brief Front kolejki
    
    Sprawdza co znajduje się na przodzie kolejki
    \exception EmptyQueueException wyjątek pustej kolejki
    \return Zwraca pierwszy element w kolejce, bez jego usuwania
  */
  virtual Typ front()
    throw (EmptyQueueException)
  {
    if (Tablica.Index() < 0) throw EmptyQueueException();
    else 
      return Tablica[0];
  }
};
  
#endif
