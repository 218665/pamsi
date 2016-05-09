#ifndef ILIST
#define ILIST
/*!
  \file
  \brief Definicja klasy IList

  Plik zawiera definicje interfejsu listy
*/
#include "tablica1d.hh"
#include "Exceptions.hh"
/*!
  \brief Interfejs listy

  Na liste mozemy wpisywac na każde miejsce
  i usuwać z każdego miejsca
*/
template <typename Typ>
class IList
{
public:
  virtual ~IList() {};
  /*!
    \brief Zapisywanie na liste
  */
  virtual void add(Typ, int)=0;
  /*!
    \brief Ściąganie z listy
  */
  virtual Typ remove(int)=0;
  /*!
    \brief Rozmiar listy
  */
  virtual int size() const =0;
  /*!
    \brief Czy pusty?
  */
  virtual bool isEmpty()=0;
  /*!
    \brief Element listy
  */
  virtual Typ get(int) const =0;
};


#endif
