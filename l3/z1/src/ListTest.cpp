#include "../inc/ListTest.hh"
#include <fstream>
using namespace std;

bool ListTest::load(string TytulKsiazki, int LiczbaElementow)
{
  ifstream Ksiazka;
  string slowo;
  Ksiazka.open(TytulKsiazki);
  if (!Ksiazka.is_open()) return false;
  for (int i = 0; i < LiczbaElementow; ++i){
    if(!Ksiazka.eof())
      Ksiazka >> slowo;
    else 
      return false;
    add(slowo, i);
  }
  Ksiazka.close();
  return true;
}

void ListTest::display()
{
  for (int i = 0; i < size();++i)
    cout << get(i)<<" ";
  cout<< endl;
}

void ListTest::reset()
{
  while(!isEmpty())
    Tablica.UsunElement();
}

int ListTest::find(string item)
{
  for (int i = 0; i < size(); ++i){
    if( get(i) == item)
      return i;
  }
  return -1;
}
