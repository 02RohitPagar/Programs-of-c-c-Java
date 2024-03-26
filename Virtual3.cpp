#include<iostream>
using namesapce std;

class Base
{
  public:
  int i,j,k;
  void Fun()
    {cout<<"Inside Base fun\n";}
    void Gun()
    {cout<<"Inside Base Gun\n";}
    void Sun()
    {cout<<"Inside Base Sun\n";}
    void Run()
    {cout<<"Inside Base Run\n";}
};

class Derived: public Base
{
   public:
    int a,b;
    void Gun()
    {cout<<"Inside derived gun\n";}
    void Run()
    {cout<<"Inside derived Run\n";}
};

int main()
{
  
  Base *bp = new Derived;
  bp->Fun();
  bp->Gun();
  bp->Sun();
  bp->Run();
    return 0;
}