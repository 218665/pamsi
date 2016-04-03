#include <iostream>
#include "../inc/tablica1d.hh"
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <chrono>
#define MAXRAND 100
using namespace std;
#define ROZMIAR_TABLICY 1000000 
#define LAP1 10
#define LAP2 1000
#define LAP3 10000
#define LAP4 100000




int main()
{
  tablica1D Ex;
  std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
  for(int i=0; i<LAP1; ++i)
    Ex.DodajElement(rand() %MAXRAND );
  std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
  cout << "Liczba sekund to:"<<fixed<<setprecision(6)
       << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()/1e6
       <<" dla "<<LAP1<<" elementów"<< endl;

  start = std::chrono::steady_clock::now();
  for(int i=LAP1; i<LAP2; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  end = std::chrono::steady_clock::now();
  cout << "Liczba sekund to:"<<fixed<<setprecision(6)
       <<std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()/1e6
       << " dla "<<LAP2<<" elementów"<<endl;

  start = std::chrono::steady_clock::now();
  for(int i=LAP2; i<LAP3; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  end = std::chrono::steady_clock::now();
  cout << "Liczba sekund to:"<<fixed<<setprecision(6)
       <<std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()/1e6
       <<" dla "<<LAP3<<" elementów"<< endl;

  start = std::chrono::steady_clock::now();
  for(int i=LAP3; i<LAP4; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  end = std::chrono::steady_clock::now();
  cout << "Liczba sekund to:"<<fixed<<setprecision(6)
       <<std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()/1e6
       <<" dla "<<LAP4<<" elementów"<< endl;
 
  start = std::chrono::steady_clock::now();
  for(int i=LAP4; i<ROZMIAR_TABLICY; ++i)
    Ex.DodajElement(rand() %MAXRAND);
  end = std::chrono::steady_clock::now();
  cout << "Liczba sekund to:"<<fixed<<setprecision(6)
       <<std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()/1e6
       <<" dla "<<ROZMIAR_TABLICY<<" elementów"<< endl;
}

