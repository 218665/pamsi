#ifndef RBLEAF_HH
#define RBLEAF_HH
#include <ostream>
using namespace std;
enum color {czarny, czerwony};

template <class Typ>
class RBleaf
{
private:
  color kolor;
  Typ wartosc;
public:
  RBleaf() {}
  RBleaf(int value, color RB = czerwony) {wartosc = value; kolor = RB;}
  color Kolor() const{return kolor;}
  color& Kolor() {return kolor;}
  Typ Wartosc() const {return wartosc;}
  Typ& Wartosc() {return wartosc;}
  friend ostream& operator <<  (ostream& strm, RBleaf wezel)
  {
    strm << wezel.Wartosc() <<"("<<wezel.Kolor()<<")";
    return strm;
  }
};
#endif
