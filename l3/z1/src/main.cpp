#include <iostream>
#include "../inc/IRunnable.hh"
#include "../inc/Stoper.hh"
#include "../inc/ListTest.hh"
#include "../inc/StackTest.hh"
#include "../inc/QueueTest.hh"
using namespace std;
#define LAPS 10
#define ELEM 5

int main()
{
  /* 
  int liczbaElementow[ELEM] = {10, 1000, 10000, 100000, 1000000};
  double Srednia;
  ListTest Bolt;
  ofstream Wyniki, WynikiSrednie;
  Stoper czas;

  WynikiSrednie.open("Srednia.csv");
  Wyniki.open("Wyniki.csv");

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
      if(Bolt.prepare(liczbaElementow[j])){
	czas.start();
	if(Bolt.run())
	  {
	    czas.stop();
	    Srednia += czas.getElapsedTime()/LAPS;
	    Wyniki << i << "," << liczbaElementow[j] << ",";
	    if(!czas.dumpToFile(Wyniki))
	      cerr << "Zapis nr " <<i<< "nieudany, dla liczby elementow"<< liczbaElementow[j]<<endl;
	  }
      
	else {
	  czas.stop();
	  cout << i<<". zapis "<< liczbaElementow[j] <<" elementów nie powiódł się" << endl;
	}
      }
      else{
	cerr<< "Zbyt krotki tekst dla "<< liczbaElementow[j] <<" elementow."<< endl;
	return 2;
      } 
    }
	   WynikiSrednie << liczbaElementow[j] << "," << Srednia << endl;
  }
  */
  ListTest Lista;
  StackTest Stos;
  QueueTest Kolejka;
  Lista.prepare(10);
  Lista.display();
  cout<<Lista.get(9)<<endl;
  Lista.reset();
  Lista.display();
  Lista.prepare(10);
  try{  
    Lista.get(11);
  }
  catch(EmptyListException)
    {
      cout<<"Wyjatek"<<endl;
    }
  
  try{
    Stos.pop();
    }
  catch(EmptyStackException)
    {
      cout<<"Stos pusty!"<<endl;
    }
  Stos.fill(10);
  Stos.display();
  cout<<Stos.pop()<<endl;
  Stos.display();
  Stos.push(2);
  Stos.display();
  for(int i =0; i<10 ; ++i)
    Stos.pop();
  Stos.display();

   try{
    Kolejka.dequeue();
    }
  catch(EmptyQueueException)
    {
      cout<<"Kolejka pusta!"<<endl;
    }
  Kolejka.fill(10);
  Kolejka.display();
  cout<< Kolejka.dequeue() <<endl;
  Kolejka.display();
  Kolejka.enqueue(3);
  Kolejka.display();
  for(int i = 0; i < 10; ++i)
    Kolejka.dequeue();
  Kolejka.display();
  if(Kolejka.isEmpty())
    cout<<"Pusta"<<endl;
}

