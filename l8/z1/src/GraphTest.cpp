#include "../inc/GraphTest.hh"

void GraphTest::wypiszMacierz()
{
  for (int i = 0; i < rozmiarMacierzy; ++i)
  {
    for(int j = 0; j < rozmiarMacierzy; ++j) cout<< Macierz[i][j]<<" ";
    cout << endl;
  }
}
