#ifndef IDRZEWO_HH
#define IDRZEWO_HH

class IDrzewo
{
public:
  virtual bool insert(int) =0;
  virtual int root()=0;
  virtual bool isEmpty()=0;
  virtual bool isExternal(int)=0;
  virtual bool hasLeft(int)=0;
  virtual bool hasRight(int)=0;
  virtual int visit(int)=0;
  virtual int left(int)=0;
  virtual int right(int)=0;
  virtual bool leftRotate(int)=0;
  virtual bool rightRotate(int)=0;
};
#endif
