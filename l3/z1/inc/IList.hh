#ifndef ILIST
#define ILIST
/*!
  \file 
  \brief Definicja klasy IList

  Plik zawiera definicje szablonu klasy IList, 
  który jest interfejsem listy
*/
#include "Itablica1d.hh"
#include "Exceptions.hh"
/*!
  \brief Szablon listy

  Na liste mozemy wpisywac na każde miejsce 
  i usuwać z każdego miejsca
*/
template <typename Typ>
class IList
{
protected:
  Itablica1D <Typ> Tablica;
public:
  /*!
    \brief Zapisywanie na liste
    
    Wkłada element na dowolne miejsce na liście, jeżeli int index jest większy minimum o 2 od 
    indexu ostatniego elementu to przestrzeń między elementami zostaje uzupełniona przez wartość 0.
    Jeżeli int index wskazuje na miejsce, gdzie znajduje się element to zostaje on przepisany na kolejną
    pozycje, a na jego miejsce zostaje wpisany int item

    \param[in] item - element, który chcemy umieścić na liście
    \param[in] index - miejsce, gdzie chcemy zapisać element (liczony od 0)
  */
  void add (Typ item, int index){
    Tablica.DodajElement(item, index);
  }

  /*!
    \brief Ściąganie z listy
    
    Usuwa element z listy 
    \exception EmptyListException wyjątek pustej listy, wyrzucany gdy chcemy usunąć element o indexie
    którego nie ma na liście
    \return Zwraca usunięty element
  */
  Typ remove(int index)
    throw (EmptyListException)
  {
    if(index > Tablica.Index())
      throw EmptyListException();
    else
      return Tablica.UsunElement(index);
  }
  /*!
    \brief Rozmiar listy
    
    Rozmiar listy jest liczbą całkowitą liczoną od 0, gdy lista pusty,

    \return Zwraca liczbę elementów zapisanych na liście
  */
  int size(){return Tablica.Index()+1;}
  /*!
    \brief Czy pusty?
    
    Sprawdza czy na liście znajdują się elementy

    \retval true - lista pusty
    \retval false - na liście są elementy
  */
  bool isEmpty()
  {
    if(Tablica.Index() > 0) return false;
    else return true;		   
  }
  /*!
    \brief Element listy
    
    Dostęp do dowolnego elementu listy
    \exception EmptyListException wyjątek pustej listy, wyrzucany gdy chcemy odczytać element o indexie
    którego nie ma na liście
    \param[in] index - Numer elementu, który chcemy odczytać, gdzie index 0 to pierwszy element
    \return Zwraca element, bez jego usuwania
  */
  Typ get(int index) 
  {
    if (index > Tablica.Index())
      throw EmptyListException();
    else
      return Tablica[index];
  }
  
};
  

#endif 