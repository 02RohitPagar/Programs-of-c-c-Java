#include<iostream>
using namespace std;

int AdditionI(int No1,int No2)
{
    int ans=0;
    ans = No1+No2;
    return ans;
}
float AdditionF(float No1,float No2)
{
    float ans=0;
    ans = No1+No2;
    return ans;
}
double AdditionD(double No1,double No2)
{
    double ans=0;
    ans = No1+No2;
    return ans;
}
int main()
{
  int iRet=0;
  float fRet=0.0f;
  double dRet=0.0;

  iRet=AdditionI(10,11);
  fRet=AdditionF(10.0,11.0f);
  dRet=AdditionD(10.0,11.0);

  cout<<iRet<<"\n";
  cout<<fRet<<"\n";
  cout<<dRet<<"\n";
    return 0;
}