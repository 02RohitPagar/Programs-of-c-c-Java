#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[],int iSize)
{
   int iCnt=0;
  int iMin=Arr[0];

   
   for (iCnt = 0; iCnt <iSize; iCnt++)
   {
     if (Arr[iCnt]<iMin)
     {
        iMin =Arr[iCnt];
     }
   }
  
   return iMin;
}
int main()
{
  int iCount=0,iCnt=0,iRet=0;
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

  iRet=Minimum(ptr,iCnt);
  printf("Minimum number is%d\n:",iRet);

  free (ptr);

  printf("Dynamic memory deallocated succesfully...\n");

    return 0;
}