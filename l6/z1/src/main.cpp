#include <iostream>
#include "../inc/IRunnable.hh"
#include "../inc/Stoper.hh"
#include "../inc/DrzewoTest.hh"

using namespace std;
#define LAPS 10
#define ELEM 6


int main()
{
  /*
  int rozmiary[ELEM]= {10, 100 , 1000, 10000, 100000, 10000000};
  IStoper* czas = new Stoper();
  IRunnable* bolt= new DrzewoTest();
  double srednia;
  for (int j = 0; j< ELEM; ++j){
    bolt->prepare(rozmiary[j]);
    for(int i = 0; i < LAPS; ++i){
      czas ->start();
      if(bolt->run()){
        czas -> stop();
         cout << fixed << setprecision(8) << czas -> getElapsedTime() << endl;
        srednia += (czas -> getElapsedTime()/10);
      }
      else
        cout << "NOK"<<endl;
    }
    cout <<"Srednia: " <<srednia << endl;
  }
  */
  int rozmiary[ELEM]= {100, 1000,10000, 1000000, 10000000, 100000000};
  DrzewoTest Test;
  IStoper* czas = new Stoper();
  ofstream plik;
  string word;
  plik.open("WynikiZapis.csv");
  plik << "N elementów," <<"Czas zapisu"<<endl;
  for (int j = 0; j< ELEM; ++j){
    Test.prepare(rozmiary[j]);
    for (int i =0; i<LAPS;++i )
      {
        czas -> start();
        if (Test.run()) czas -> stop();
        plik << rozmiary[j] <<"," << czas -> getElapsedTime() <<endl;
      }
  }
  plik.close();

Test.prepare (30);
Test.Wypisz();
}
