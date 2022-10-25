#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    a=3.4;
    b=4.2;
    c=5.5;
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%f\n",area);
    return 0;
}