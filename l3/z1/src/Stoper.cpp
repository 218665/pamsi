#include "../inc/Stoper.hh"


void Stoper::stop()
{
  if (isWork) stopTime =  std::chrono::steady_clock::now();
  else std::cerr << "Stoper już zatrzymany"<< std::endl;
  isWork = false;
}

bool Stoper::dumpToFile( ofstream& Plik)
{
  if (Plik.is_open())
    {
      Plik << fixed << setprecision(6) <<getElapsedTime()<<endl;
      return true;
    }
  else 
    return false;
}
