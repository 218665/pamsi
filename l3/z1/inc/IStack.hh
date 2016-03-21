#ifndef ISTACK
#define ISTACK
/*!
  \file 
  \brief Definicja klasy IStack

  Plik zawiera definicje szablonu klasy IStack, 
  który jest interfejsem stosu
*/
#include "Itablica1d.hh"
#include "Exceptions.hh"

/*!
  \brief Szablon stosu

  Stos jest strukturą typu LIFO (Last-In-Fist-Out),
  zaimplementowany na tablicy dynamicznej
*/
template <typename Typ>
class IStack
{
protected:
  Itablica1D <Typ> Tablica;
public:
  /*!
    \brief Rozmiar stosu
    
    Rozmiar stosu jest liczbą całkowitą liczoną od 0, gdy stos pusty,

    \return Zwraca liczbę elementów zapisanych na stosie
  */
  int size(){return Tablica.Index() + 1; }
 
  /*!
    \brief Czy pusty?
    
    Sprawdza czy na stosie znajdują się elementy

    \retval true - stos pusty
    \retval false - na stosie są elementy
  */
  bool isEmpty(){
    if(Tablica.Index() > 0) return false;
    else return true;
  }

  /*!
    \brief Wkładanie na stos
    
    Wkłada element na szczyt stosu

    \param[in] item - element, który chcemy umieścić na stosie
  */
  void push(Typ item)
  {
    Tablica.DodajElement(item);
  }

  /*!
    \brief Ściąganie ze stosu
    
    Usuwa element ze szczytu stosu
    \exception EmptyStackException wyjątek pustego stosu
    \return Zwraca usunięty element
  */
  Typ pop()
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
  Typ top()
    throw (EmptyStackException)
  {
    if (Tablica.Index() < 0) throw EmptyStackException();
    else return Tablica[Tablica.Index()];
  }
};


#endif
