#include<stdio.h>
#include<stdbool.h>

void Sumfactor(int iNo)
{
 int iCnt =0;
 int isum =0;
 for(iCnt =1;iCnt<=(iNo/2);iCnt++)
 {
    if((iNo % iCnt)==0)
    {
    isum= isum + iCnt;
    }
    return isum;
 }
}

int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter the number:\n");
  scanf("%d",&iValue);

  iRet = Sumfactor(iValue);
  printf("sum of factors are :%d\n",iRet);
  
    return 0;
}