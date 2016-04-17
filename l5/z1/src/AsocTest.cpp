#include "../inc/AsocTest.hh"

bool AsocTest::prepare(int size)
{
  table.clear();
  ifstream plik;
  string word;
  plik.open("test.doc");
  for (int i = 0; i<size; ++i)
    {
      plik >> word;
      add(word, rand()%MAX);
    }
  plik.close();
  plik.open("test.doc");
  for (int i = 0; i< rand()%size; ++i)
    plik >> wanted;
  // table.display();
  plik.close();
  return true;
}


bool AsocTest::run()
{
  try
    {
      cout<< table.get(wanted)<<endl;
    }
  catch (...)
    {
      return false;
    }  
  return true;
}
