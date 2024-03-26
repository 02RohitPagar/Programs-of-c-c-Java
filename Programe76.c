#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
    if ((Arr[iCnt]%2)!=0)
      {
        iSum=iSum+Arr[iCnt];
      }
      
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
    
    iRet=OddAddition(ptr,iCount);
    printf("addition of all Odd elements are:%d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;

}