#include <iostream>
using namespace std;

class Pattern
{
 private:
    int iRow;
    int iCol;
   int iCnt=0;

 public:
   Pattern(int X,int Y)
   {
    iRow=X;
    iCol=Y;
   }     
   void display()
  {
    int i=0,j=0;
   for (i= 1; i<=iRow; i++)
   {
    for (j = 1; j < iCol; j++)
    {
        if (i==1)
        {cout<<"$\t";}

        else if ((i==1)||(i==iRow)||(j==1)||(j==iCol))
        { cout<<"*\t";}
        
        else if(i>j)
        {cout<<"0\t";}
        
        else if (j>i)
        {cout<<"1\t";}
    } 
    } 
   }     
};

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

   cout<<"Enter the number of rows:"<<endl;
   cin>>iValue1;
 
   cout<<"Enter the number of columns:"<<endl;
   cin>>iValue2;

   Pattern *pobj = new Pattern (iValue1,iValue2);

   pobj->display();

   delete pobj;

    return 0;
}