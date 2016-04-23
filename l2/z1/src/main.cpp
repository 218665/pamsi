#include <iostream>
#include "../inc/tablica1dtest.hh"
#include "../inc/Stoper.hh"
using namespace std;
#define LAPS 10
#define ELEM 5

int main()
{
  int liczbaElementow[ELEM] = {10, 1000, 100000, 1000000, 100000000};
  double Srednia;
  IRunnable* Bolt=new tablica1Dtest();
  ofstream Wyniki, WynikiSrednie;
  IStoper* czas=new Stoper();

  WynikiSrednie.open("SredniaIII.csv");
  Wyniki.open("WynikiIII.csv");

  if(!Wyniki.is_open() || !WynikiSrednie.is_open()){
    cerr << "Nie otwarty plik!"<< endl;
    return 1;
  }
  Wyniki << "Pomiar,LiczbaElementow,Czas" <<endl;
  WynikiSrednie << "LiczbaElementow,Czas" <<endl;

  //Dla 10 elementów
  for (int j = 0;j < ELEM; ++j){
    Srednia = 0;
    for (int i = 0; i < LAPS; ++i){
      Bolt->prepare(liczbaElementow[j]);
      czas->start();
      if(Bolt->run())
	{
	  czas->stop();
	  Srednia += czas->getElapsedTime()/LAPS;
	  Wyniki << i << "," << liczbaElementow[j] << ",";
	  if(!czas->dumpToFile(Wyniki))
	    cerr << "Zapis nr " <<i<< "nieudany, dla liczby elementow"<< liczbaElementow[j]<<endl;
	}

      else {
	czas->stop();
	cout << i<<". zapis "<< liczbaElementow[j] <<" elementów nie powiódł się" << endl;
      }
    }
    WynikiSrednie << liczbaElementow[j] << "," << Srednia << endl;
  }
  //Bolt->prepare(10);
  //Bolt->run();
  //Bolt->Wypisz();

}
