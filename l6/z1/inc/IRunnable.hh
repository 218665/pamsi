#ifndef IRUNNABLE
#define IRUNNABLE

class IRunnable
{
public:
  virtual bool run()=0;
  virtual bool prepare(int)=0;
};



#endif
