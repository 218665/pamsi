#include "../inc/IStoper.hh"


void IStoper::stop()
{
  if (isWork) stopTime = static_cast <double> (clock());
  else std::cerr << "Stoper już zatrzymany"<< std::endl;
  isWork = false;
}

bool IStoper::dumpToFile( ofstream& Plik)
{
  if (Plik.is_open())
    {
      Plik << fixed << setprecision(6) <<getElapsedTime()<<endl;
      return true;
    }
  else 
    return false;
}

