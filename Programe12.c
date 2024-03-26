#include<stdio.h>
 
 float CalculatePecentage( int iMarks,int iTotal)
 {
   auto float fPercentage = 0.0f;
   fPercentage = (((float)iMarks /(float) iTotal)*100); 


   return fPercentage;
 }

int main()
{
 auto int iValue1=0;
 auto int iValue2 =0;
 auto float fRet = 0.0f;

 printf("Enter the Marks :\n");
 scanf("%d",&iValue1);
 
 printf("Enter the Total Marks :\n");
 scanf("%d",&iValue2);

  fRet = CalculatePecentage(iValue1, iValue2);

  printf("Your percentage is:%f\n",fRet);

    return 0;
}