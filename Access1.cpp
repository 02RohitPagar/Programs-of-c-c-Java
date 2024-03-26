#include<iostream>
using namesapce std;

class demo
{
  int i;
  public;
  int j;
  private;
  int k;
  protected;
  int a;
  public;
  demo()
  {
    i = 10;
    j = 20;
    k = 30;
    a = 40;
  }
  void display()
  {
    cout<<"value of i :"<<i<<"\n"; //A
    cout<<"value of j :"<<j<<"\n";   //A
    cout<<"value of k :"<<k<<"\n"; //A
    cout<<"value of a :"<<a<<"\n";   //A
  }
};
class Helloc: public demo
{
    public:
    void HelloDisplay()
    {
    //cout<<"value of i :"<<i<<"\n"; //NA
    cout<<"value of j :"<<j<<"\n";   //A
    //cout<<"value of k :"<<k<<"\n"; //NA
    cout<<"value of a :"<<a<<"\n";   //A
  }
    }
}

int main()
{
  Hello hobj;
  hobj.HelloDisplay();

    return 0;
}