#include <stdio.h>
#include <stdlib.h>

int Freaquency(int Arr[],int iSize,int iNo)
{
   int iCnt=0;
  int iFrequency=0;

   for (iCnt = 0; iCnt <iSize; iCnt++)
   {
     if (Arr[iCnt]==iNo)
     {
        iFrequency++;
     }
   }
  return iFrequency;
}
int main()
{
  int iCount=0,iCnt=0,iRet=0,iValue=0;
  int *ptr =NULL;
  
  printf("Enter the number that you want to enter:\n");
  scanf("%d",&iCount);

  ptr=(int*)malloc(iCount * sizeof(int));
  printf("dynamic memory gets allocatedsuccesfully...\n");

  printf("Enter the element:\n");
  for ( iCnt = 0; iCnt<iCount; iCnt++)
  {
    printf("\n Enter the elemet no %d:",iCnt+1);
    scanf("%d",&ptr[iCnt]);
  }

printf("Enter the the number that you want to search:\n");
scanf("%d",&iValue);

  iRet=Freaquency(ptr,iCount,iValue);
 printf("%d ocurs %d times\n",iValue,iRet);

  free (ptr);

  printf("Dynamic memory deallocated succesfully...\n");

    return 0;
}