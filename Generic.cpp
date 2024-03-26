#include<iostream>
using namespace std;
template<class t>

T Addition(T No1,T No2)
{
    T ans;
    ans = No1+No2;
    return ans;
}
 
int main()
{
  int iRet=0;
  float fRet=0.0f;
  double dRet=0.0;

  iRet=Addition(10,11);
  fRet=Addition(10.0,11.0f);
  dRet=Addition(10.0,11.0);
  
  cout<<iRet<<"\n";
  cout<<fRet<<"\n";
  cout<<dRet<<"\n";
    return 0;
}