#ifndef ISTACK
#define ISTACK
/*!
  \file 
  \brief Definicja klasy IStack

  Plik zawiera definicje szablonu klasy IStack, 
  który jest interfejsem stosu
*/
#include "tablica1d.hh"
#include "Exceptions.hh"

/*!
  \brief Interfejs stosu

  Stos jest strukturą typu LIFO (Last-In-Fist-Out).
*/
template <typename Typ>
class IStack
{
public:
  /*!
    \brief Rozmiar stosu
  */
  virtual int size()=0;
  /*!
    \brief Czy pusty?
  */
  virtual bool isEmpty()=0;
  /*!
    \brief Wkładanie na stos
  */
  virtual void push(Typ)=0;
  /*!
    \brief Ściąganie ze stosu
  */
  virtual Typ pop()=0;
  /*!
    \brief Szczyt stosu
  */
  virtual Typ top()=0;
};


#endif
