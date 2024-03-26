//problem statement-Accept 2 values from user and perform the addition.
//step1:understand the problem statement.
//conclusion:We have to accept 2 integers and perform that addition.

//Step 2-Write the algorithem
/*
START
   Accept first number from user and store it into NO1.
   Accept second number from user and store it into NO2.
   create the variable of No1 and No2, store the result in Ans perform Addition 
   of No1 and No2, store the result in ans display the result from Ans to usser
*/
// Step 3 :decide the programming language(c/c++/Java/python)
//We select C programming

//Step 4: Write the programe using C

#include<stdio.h>
//Addition is a function which accept 2 parameters as integer and it returns integer.
int Additon(int iNO1,int iNO2)
{
    int iSum = 0;
    iSum = iNO1 + iNO2;
    return iSum;
}
int main()
{
  auto int ivalue1=0;
  auto int ivalue2 =0;
  auto int iAns =0;

  printf("Enter first number:\n");
  scanf("%d",&ivalue1);

  printf("Enter second number:\n");
  scanf("%d",&ivalue2 );
  
  iAns = ivalue1 +ivalue2;
  printf("Addition is :%d\n",iAns); 


    return 0;
}
//Step 5- test the programe