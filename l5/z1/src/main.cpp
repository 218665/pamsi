#include <iostream>
#include "../inc/IRunnable.hh"
#include "../inc/Stoper.hh"
#include "../inc/AsocTest.hh"
using namespace std;
#define LAPS 10
#define ELEM 5

int main()
{
  /*  
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
  */
  AsocTest Test;
  IStoper* czas = new Stoper();
  ofstream plik;
  ifstream ksiazka;
  string word;
  ksiazka.open("test.doc");
  plik.open("WynikiZapis.csv");
  plik << "N-ty element," <<"Czas zapisu"<<endl; 
  for (int i =0; i<1e6;++i )
    {
      ksiazka >> word;
      czas -> start();
      Test.add(word, i);
      czas -> stop();
      if((i%100) == 0)
	plik << i <<"," << czas -> getElapsedTime() <<endl;
    }
  plik.close();
  ksiazka.close();
}

