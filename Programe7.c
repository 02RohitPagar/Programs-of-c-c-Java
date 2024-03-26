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
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name  :Addition
//  Description    :it is used to perform addition of 2 integers
//  input argument :Integer,Integer
//  output         :Integer
//  Author         :Rohit Pralhad Pagar
//  Date           :25/09/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////
int Additon(int iNO1,int iNO2)
{
    int iSum = 0;   // variable to store the vallue of addition
    iSum = iNO1 + iNO2;
    return iSum;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point function opf an applucation which performs addition of 2 integers
//

///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
  auto int ivalue1=0;  // variable to store first input
  auto int ivalue2 =0;  // variable to store second input
  auto int iAns =0;    // variable to store the result

  printf("Enter first number:\n");
  scanf("%d",&ivalue1);

  printf("Enter second number:\n");
  scanf("%d",&ivalue2 );
  
  iAns = Addition(ivalue1,ivalue2); // function call to perform addition
  printf("Addition is :%d\n",iAns); 


    return 0;
}
//Step 5- test the programe
/*
test case 1
input: 10  30
output: 40

test case 2
input: 12  50
output: 62

test case 3
input: -10   20
output:10
*/