#include "../inc/StackTest.hh"
using namespace std;


void StackTest::display()
{
  for (int i= 0; i < size(); ++i)
    std::cout << Tablica[i] <<" ";
  std::cout << endl;
}

void StackTest::fill(int LiczbaElementow)
{
  for(int i = 0; i < LiczbaElementow; i++)
    push(rand()%100);
   
}

