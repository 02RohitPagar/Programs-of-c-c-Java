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
    cout<<"value of j :"<<j<<"\n"; //A
    cout<<"value of k :"<<k<<"\n"; //A
    cout<<"value of a :"<<a<<"\n"; //A
  }
};

int main()
{
    demo obj;
   // cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n"; 
  //cout<<"value of k :"<<obj.k<<"\n";
  //cout<<"value of a :"<<obj.a<<"\n";

 
    return 0;
}