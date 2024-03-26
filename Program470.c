#include<stdio.h>

int CountCapitalR(char *str)
{
    static int icap=0;
    if(*str!='\0')
    {
       if (*str>='A'&&*str<='Z')
       {
            icap++;
       } 
        str++;
        CountCapitalR(str);
    }
    return icap;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("enter the string:\n");
    scanf("%[^'\n']s",Arr);

   iRet=CountCapitalR(Arr);
   printf("Length of string is:%d",iRet);
   
    return 0;
}