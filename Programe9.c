//Problem statement- Accept radious from user and calculate the area of circle

//Step 1- Understand the problem statement
//Conclution -We are going to use the formula as PI*R*R

//Step 2- Algorithm
/*
   START 
   Accept radious from user and store into RADIOUS
   Create variable as PI and store value 3.14
   Calculate the area PI*RADIOUS*RADIOUS
   Display the value of area to the user 
   STOP
*/
#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function name  :CalculateArea
//  Description    :it is used to calculate the area of circle
//  input argument :floate
//  output         :floate
//  Author         :Rohit Pralhad Pagar
//  Date           :02/10/2023
//   
/////////////////////////////////////////////////////////////////
float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;
    fAns = PI * fValue * fValue;
    return fAns;
}

int main()
{
  auto float fRadious = 0.0f;
  auto float fArea = 0.0f;

  printf("Enter the radious of the circle: \n");
  scanf("%f",&fRadious);

  fArea = CalculateArea(fRadious);

  printf("Area of circle is:%f\n",&fArea);
    return 0;
}