#include "../inc/QueueTest.hh"
using namespace std;
void QueueTest::fill(int LiczbaElementow)
{
  for(int i=0; i < LiczbaElementow; ++i)
    enqueue(rand()%100);
}

void QueueTest::display()
{
  for (int i = 0; i<size(); ++i)
    cout<< Tablica[i] << " ";
  cout << endl;
}
