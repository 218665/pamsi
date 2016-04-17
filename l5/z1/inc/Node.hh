#ifndef NODE_HH
#define NODE_HH
#include <string>
using namespace std;

template <class Typ>
class Node
{
private:
  string key;
  Typ value;
public:
  Node(Typ wartosc, string klucz) {key = klucz; value=wartosc;}
  Node() {};
  string Key() {return key;}
  Typ Value()const {return value;}
  Typ& Value() {return value;}

  friend ostream& operator <<  (ostream& strm, Node wezel)
  {
    strm << wezel.Key() <<", "<<wezel.Value();
    return strm;
  }
};



#endif 
