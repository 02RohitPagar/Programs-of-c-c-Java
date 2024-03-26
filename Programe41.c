#include<stdio.h>
#include<stdbool.h>

int Checkprime(int iNo)
{
    int iCnt =0;
    int isum =0;

 if (iNo < 0)
 {
    iNo = -iNo;
 }
 for(iCnt =2;iCnt<=(iNo/2);iCnt++)
 {
    if((iNo % iCnt)==0)
    {return false;}
 }
 return true;

}
int main()
{
  int iValue=0;
  bool bRet=false;
  
  printf("Enter the number:\n");
  scanf("%d",&iValue);

  bRet=Checkprime(iValue);
  
  if (bRet==true)
  {printf("%d is prime number\n",iValue);}
  else
  {printf("%d is not prime number\n",iValue);}
  

    return 0;
}