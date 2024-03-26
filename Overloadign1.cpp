#include<iostream>
using namespace std;

class demo
{
    public:
       int addition(int A,int B)
       {
         int Ans = 0;
         Ans =A+B;
         return Ans;
       }
       int addition (int A,int B,int C)
       {
        int Ans = 0;
        Ans =A + B + C;
        return Ans;
       }
       float addition(float A,float B)
       {
         float Ans = 0.0f;
         Ans =A+B;
         return Ans;
       }
};

int main()
{
 demo obj;
 int i=10,j=20,k=30;
int Ret = 0;
float p= 90.9,q = 80.8,fRet=0.0;

fRet = obj.addition(p,q);
cout<<"addition is :"<<fRet<<"\n";

Ret =obj.addition(i,j);
 cout<<"addition is :"<<Ret<<"\n";

Ret =obj.addition(i,j,k);
 cout<<"addition is :"<<Ret<<"\n";
 
    return 0;
}