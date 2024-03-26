/*
  START
  Accept number from useer
  dividde that number by 2
  if reminder is o then display even
  otherwise display odd
  STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo % 2 ) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }

}
int main()
{
  int iValue =  0;
  bool bRet = false;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  bRet = CheckEven(iValue);
  if(bRet ==true)
  {
    printf("%d is an even number\n",iValue);
  }
  else
  {
     printf("%d is an odd number\n",iValue);
  }
    return 0;
}