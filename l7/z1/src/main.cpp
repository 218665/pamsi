#include "../inc/IRunnable.hh"
#include <iostream>
#include "../inc/Stoper.hh"
#include "../inc/GraphTest.hh"

using namespace std;
#define LAPS 10
#define ELEM 4


int main()
{

  int rozmiary[ELEM]= {10, 100 , 1000, 10000};
  IStoper* czas = new Stoper();
  IRunnable* bolt= new GraphTest();
  double srednia;
  for (int j = 0; j< ELEM; ++j){
    for(int i = 0; i < LAPS; ++i){
      bolt->prepare(rozmiary[j]);
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
/*
GraphTest graf;
graf.addEdge(0,1);
graf.addEdge(0,4);
graf.addEdge(0,2);
graf.addEdge(1,3);
graf.addEdge(2,4);
IList<int>* sasiedzi;
for (int i = 0; i<5; ++i)
{
  sasiedzi = graf.getNeighbours(i);
  cout <<"Sasiedzi " << i << ": ";
  while (!sasiedzi->isEmpty()) {
    cout << sasiedzi->remove(0) <<" ";
  }
  delete sasiedzi;
  cout << endl;
}
cout << "Macierz :"<<endl;
graf.wypiszMacierz();
graf.addVertex(11);
cout << "Macierz :"<<endl;
graf.wypiszMacierz();
if(graf.run()) cout << "Znaleziono sciezke" << endl;
*/
}
