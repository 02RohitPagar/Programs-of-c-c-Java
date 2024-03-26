#include<iostream>
using namesapce std;

class Base
{
  public:
  int i,j,k;
  virtual void Fun()//concreat method
    {cout<<" Base fun\n";}
  virtual void Gun()//concreat method
    {cout<<" Base Gun\n";}
    virtual void Additiion(int no1,int no2)=0;//abstract method
};

class Derived: public Base
{
   public:
    int a,b;
   virtual void Gun()//concreat method
    {cout<<"derived gun\n";}
    void Sun()//concreat method
    {cout<<"Inside derived Sun\n";}
    int Adddition (int no1,int no2)=0;
    {
        return void Additiion(int no1, int no2);//concreat method
    }

};

int main()
{
  Base bobj;
  Base *bp = new Derived;
  bp->Fun();
  bp->Gun();
  int Ret = 0;
  Ret = bp-> Addition(10,11);
  cout<<"Addtion is:"<<Ret<<"\n";

    return 0;
}