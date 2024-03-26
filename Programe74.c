#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
      iSum=iSum+Arr[iCnt];
   }
   return iSum;
}
int main()
{
  int iCount=0,iCnt=0,iRet=0;
  int *ptr=NULL;

  printf("Enter the number of elements that you want to enter:\n");
  scanf("%d",&iCount);
 
  ptr=(int*) malloc(iCount*sizeof(int));
    
    printf("Dynamic memory gets allocate succesfully for %d elements\n",iCount);

    printf("Enter the %d value:\n",iCount);
    printf("Enter the value:\n");
         for (iCnt = 0; iCnt < iCount; iCnt++)
         {
            printf("\n Enter the element no %d:",iCnt+1);
            scanf("%d",&ptr[iCnt]);
         }
    
    iRet=Addition(ptr,iCount);
    printf("Number of addition of elements are:%d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;

}