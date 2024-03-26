#include<iostream>
using namespace std;

float calculate(float marks,float outof= 100)
{
    float percentage = ((marks/outof)* 100);
    return percentage;
}

int main()
{
float Ans = 0.0f;

Ans = calculate(86,100);
cout<<"percentage:"<<Ans<<"\n";

Ans = calculate(86);
cout<<"percentage:"<<Ans<<"\n";

Ans = calculate(320,400);
cout<<"percentage:"<<Ans<<"\n";

    return 0;
}