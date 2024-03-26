#include <stdio.h>
#include <stdlib.h>

float Average(int Arr[],int iSize)
{
   int iCnt=0,iSum=0;
   float fAverage=0.0f;

   for (iCnt = 0; iCnt <iSize; iCnt++)
   {
    iSum=iSum+Arr[iCnt];
   }
  fAverage=((float)iSum/(float)iSize);
   return fAverage ;
}
int main()
{
  int iCount=0,iCnt=0;
  int *ptr =NULL;
  float fRet =0.0f;

  printf("Enter the number that you want to enter:\n");
  scanf("%d",&iCount);

  ptr=(int*)malloc(iCount*sizeof(int));
  printf("dynamic memory gets allocatedsuccesfully...\n");

  printf("Enter the element:\n");
  for ( iCnt = 0; iCnt<iCount; iCnt++)
  {
    printf("\n Enter the elemet no %d",iCnt++);
    scanf("%d",&ptr[iCnt]);
  }

  fRet=Average(ptr,iCount);
  printf("Average is:%f\n",fRet);

  free (ptr);

  printf("Dynamic memory deallocated succesfully...\n");

    return 0;
}