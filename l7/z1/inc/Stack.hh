#ifndef STACK
#define STACK
/*!
  \file
  \brief Definicja klasy Stack
  W pliku znajduje sie klasa Stack
 */
#include "IStack.hh"
/*!
  \brief Szablon stosu

  Stos jest strukturą typu LIFO (Last-In-Fist-Out),
  zaimplementowany na tablicy dynamicznej
*/
template <class Typ>
class Stack: public IStack <Typ>
{
protected:
  tablica1D <Typ> Tablica;
public:
  /*!
    \brief Rozmiar stosu
    
    Rozmiar stosu jest liczbą całkowitą liczoną od 0, gdy stos pusty,

    \return Zwraca liczbę elementów zapisanych na stosie
  */
  virtual int size(){return Tablica.Index() + 1; }
 
  /*!
    \brief Czy pusty?
    
    Sprawdza czy na stosie znajdują się elementy

    \retval true - stos pusty
    \retval false - na stosie są elementy
  */
  virtual bool isEmpty(){
    if(Tablica.Index() >= 0) return false;
    else return true;
  }

  /*!
    \brief Wkładanie na stos
    
    Wkłada element na szczyt stosu

    \param[in] item - element, który chcemy umieścić na stosie
  */
  virtual void push(Typ item)
  {
    Tablica.DodajElement(item);
  }

  /*!
    \brief Ściąganie ze stosu
    
    Usuwa element ze szczytu stosu
    \exception EmptyStackException wyjątek pustego stosu
    \return Zwraca usunięty element
  */
  virtual Typ pop()
    throw (EmptyStackException)
  {
    if (Tablica.Index() < 0) throw EmptyStackException();
    return Tablica.UsunElement();
  }


  /*!
    \brief Szczyt stosu
    
    Element na szcycie stosu
    \exception EmptyStackException wyjątek pustego stosu
    \return Zwraca element ze szczytu, bez jego usuwania
  */
  virtual Typ top()
    throw (EmptyStackException)
  {
    if (Tablica.Index() < 0) throw EmptyStackException();
    else return Tablica[Tablica.Index()];
  }
};


#endif
