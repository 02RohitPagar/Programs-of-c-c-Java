#include<stdio.h>

struct Demo
{
    int *p;
    float *q;
    double d;
};

int main()
{
    struct Demo obj;

    int i = 11;
    float f = 90.90;

    obj.p =&i;
    obj.q =&f;
    double d = 90.9999;

    printf("%d\n",*(obj.p));
    printf("%f\n",*(obj.q));
    printf("%d\n",d);

    return 0;
}