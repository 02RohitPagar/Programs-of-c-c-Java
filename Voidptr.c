#include<stdio.h>

int main()
{
   char ch ='A';
   int i = 11;
   float f = 90.99f;
   double d = 90.88;

   char *cp = &ch;
   int *ip = &i;
   float *fp = &f;
   double  *dp = &d;

   printf("%C\n",*cp);
   printf("%d\n",*ip);
   printf("%f\n",*fp);
   printf("%f\n",*dp);

   void *vp = NULL;

   vp = &ch;
   printf("%d\n",*(char *)vp);

   vp = &i;
   printf("%d\n",*(int *)vp);

    vp = &f;
   printf("%d\n",*(float *)vp);

    vp = &d;
   printf("%d\n",*(double *)vp);

    return 0;
}