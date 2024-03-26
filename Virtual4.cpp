#include<iostream>
using namesapce std;

class Base
{
  public:
  int i,j,k;
  virtual void Fun()//1000
    {cout<<"Inside Base fun\n";}
  virtual void Gun()//2000
    {cout<<"Inside Base Gun\n";}
    void Sun()//3000
    {cout<<"Inside Base Sun\n";}
    void Run()//4000
    {cout<<"Inside Base Run\n";}
};

class Derived: public Base
{
   public:
    int a,b;
   virtual void Gun()//5000
    {cout<<"Inside derived gun\n";}
    void Run()//6000
    {cout<<"Inside derived Run\n";}
   virtual void Mun()//6000
    {cout<<"Inside derived Mun\n";}
};

int main()
{
  cout<<sizeof(Base)<<"\n";
  cout<<sizeof(Derived)<<"\n";

  Base *bp = new Derived;
  bp->Fun();
  bp->Gun();
  bp->Sun();
  bp->Run();
    return 0;
}