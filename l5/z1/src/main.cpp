#include <iostream>
#include "../inc/IRunnable.hh"
#include "../inc/Stoper.hh"
#include "../inc/AsocTest.hh"
#include <fstream>
using namespace std;
#define LAPS 10
#define ELEM 1000000

int main()
{

  IStoper* czas = new Stoper();
  IRunnable* bolt= new AsocTest();
  double srednia;
  for(int i = 0; i < LAPS; ++i){
    bolt->prepare(1000000);
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
  /*
  AsocTest Test;
  IStoper* czas = new Stoper();
  ofstream plik;
  ifstream ksiazka;
  string word;
  plik.open("WynikiZapis.csv");
  plik << "N elementów," <<"Czas zapisu"<<endl;
  for (int i =0; i<LAPS;++i )
    {
      ksiazka.open("test.doc");
      czas -> start();
      for (int i = 0; i<ELEM; ++i)
        {
          ksiazka >> word;
          Test.add(word, rand()%MAX);
        }
      czas -> stop();
      ksiazka.close();
      Test.clear();
      plik << ELEM <<"," << czas -> getElapsedTime() <<endl;
    }
  plik.close();
  */
}
