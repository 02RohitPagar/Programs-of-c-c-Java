#include <stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{ 
    int iCopy=iNo;  //Xerox
    int iRev=0;
    int iDigit =0;
    
    while(iNo !=0)
    {
        iDigit = iNo %10;
        iNo =iNo /10;
        iRev=(iRev*10)+iDigit;
    }
    return(iRev==iCopy);
}
int main()
{
   int iValue =0;
   bool bRet =0;

   printf("Enter number:\n");
   scanf("%d",&iValue);

   bRet = CheckPallindrome(iValue);

  if (bRet==true)
  {
       printf("%d is a  pallindrome number\n",iValue);
  }
  else
  {
       printf("%d is not a  pallindrome number\n",iValue);
  }
   return 0;
}