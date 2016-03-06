#include <iostream>
#include "../inc/tablica1d.hh"
#include <cstdlib>
#include <iomanip>
#define MAXRAND 100
using namespace std;
#define ROZMIAR_TABLICY 100000000 
#define LAP1 10
#define LAP2 1000
#define LAP3 100000
#define LAP4 1000000


double obliczSekundy( clock_t czas )
{
  return static_cast < double >( czas ) / CLOCKS_PER_SEC;
}


int main()
{
  tablica1D Ex;
  for(int i=0; i<LAP1; ++i)
    Ex.DodajElement(rand() %MAXRAND );
  cout << "Liczba sekund to:"<<fixed<<setprecision(4)<<obliczSekundy(clock())<<" dla "<<LAP1<<" elementów"<< endl;

  for(int i=LAP1; i<LAP2; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  cout << "Liczba sekund to:"<<fixed<<setprecision(4)<<obliczSekundy(clock())<< " dla "<<LAP2<<" elementów"<<endl;

  for(int i=LAP2; i<LAP3; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  cout << "Liczba sekund to:"<<fixed<<setprecision(4)<<obliczSekundy(clock())<<" dla "<<LAP3<<" elementów"<< endl;

  for(int i=LAP3; i<LAP4; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  cout << "Liczba sekund to:"<<fixed<<setprecision(4)<<obliczSekundy(clock())<<" dla "<<LAP4<<" elementów"<< endl;
 
  for(int i=LAP4; i<ROZMIAR_TABLICY; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  cout << "Liczba sekund to:"<<fixed<<setprecision(4)<<obliczSekundy(clock())<<" dla "<<ROZMIAR_TABLICY<<" elementów"<< endl;
}

