#ifndef DRZEWOTEST_HH
#define DRZEWOTEST_HH
#include "Drzewo.hh"
#include "IRunnable.hh"

using namespace std;
class DrzewoTest : public Drzewo, public IRunnable
{
private:
  tablica1D<int> Pomocnicza;
  int rozmiar;
  void inOrder(int);
  void clear();
  void wypelnijDrzewo(int left, int right);
public:
  void Wypisz();
  void reBalance();
  virtual bool run();
  virtual bool prepare(int size);
};

#endif
