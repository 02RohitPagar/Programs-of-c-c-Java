#include<stdio.h>
#include<stdbool.h>

int Checkperfect(int iNo)
{
    int iCnt =0;
 int isum =0;
 for(iCnt =1;iCnt<=(iNo/2);iCnt++)
 {
    if((iNo % iCnt)==0)
    {isum= isum + iCnt;}
 }

 if (isum==iNo)
 { return true;}
 else
 {return false;}
}
int main()
{
 int iValue=0;
  bool bRet=false;
  
  printf("Enter the number:\n");
  scanf("%d",&iValue);

  bRet=Checkperfect(iValue);
  
  if (bRet==true)
  {printf("%d is perfect number\n",iValue);}
  else
  {printf("%d is not perfect number\n",iValue);}
  

    return 0;
}