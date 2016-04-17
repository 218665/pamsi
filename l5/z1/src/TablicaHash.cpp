#include "../inc/TablicaHash.hh"
using namespace std;

template <class Typ>
unsigned int TablicaHash<Typ>::hash(string word) const
{
  unsigned int Result=0;
  int rozmiar = word.length();
  for (int i=0; i<rozmiar; ++i)
    Result += (word[i]*(rozmiar-i)*100);
  return Result;
}


template <class Typ>
void TablicaHash<Typ>::add( string key,Typ value)
{
  Node<Typ> w(value, key);
  int i = hash(key)%BUCKETS;
  Tablica[i].add(w, Tablica[i].size());
}

template <class Typ>
Typ TablicaHash<Typ>::get(string key) const
{
  int skrot = hash(key)%BUCKETS;
  for (int i= 0; i< Tablica[skrot].size(); ++i)
    {
      if (Tablica[skrot].get(i).Key() == key) return  Tablica[skrot].get(i).Value();
    }
  throw BadHash();
}

template <class Typ>
Typ& TablicaHash<Typ>::get(string key)
{
  int skrot = hash(key)%BUCKETS;
  for (int i= 0; i< Tablica[skrot].size(); ++i)
    {
      if (Tablica[skrot].get(i).Key() == key) return  Tablica[skrot].get(i).Value();
    }
  throw BadHash();
}


template <class Typ>
Typ TablicaHash<Typ>::remove(string key)
{
  int skrot = hash(key)%BUCKETS;
  for (int i= 0; i< Tablica[skrot].size(); ++i)
    {
      if (Tablica[skrot].get(i).Key() == key) return  Tablica[skrot].remove(i).Value();
    }
  throw BadHash();
}


template <class Typ>
void TablicaHash<Typ>::clear()
{
  for(int i = 0; i< BUCKETS; ++i)
    {  
      for (int j = 0; !Tablica[i].isEmpty(); ++j)
	Tablica[i].remove(0);
    }
}

template <class Typ>
void TablicaHash<Typ>::display()
{
  for (int i=0; i < BUCKETS; ++i) 
    {
      cout<< "Bucket no. "<<i<<"( "<<Tablica[i].size() <<") : ";
      for (int j =0; j< Tablica[i].size(); ++j)
	cout << "-> ("<< Tablica[i].get(j) << ") ";
      cout<< endl;
    }	   
}
