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


  // GraphTest graf;
  // graf.addEdge(0,1,3);
  // graf.addEdge(0,2,3);
  // graf.addEdge(1,2,5);
  // graf.addEdge(1,3,2);
  // graf.addEdge(2,4,2);
  // graf.addEdge(4,5,2);
  // graf.addEdge(3,5,3);
  // graf.addEdge(3,7,4);
  // graf.addEdge(5,7,1);
  // graf.addEdge(2,6,4);
  // graf.addEdge(6,8,5);
  // graf.addEdge(8,7,7);
  // graf.wypiszMacierz();
  // for (int i=0; i< 9; ++i)
  // {
  //   for (int j=0; j<9; ++j)
  //   {
  //     cout<< "Droga "<<i<<" , "<<j<<": " << graf.BB(i,j)<< endl;
  //     cout << "Skrót "<<i<<" , "<<j<<": " << graf.branchAndBoundWithExtendedList(i,j)<<endl;
  //   }
  // }
}
