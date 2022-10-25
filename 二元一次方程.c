#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,disc,x1,x2,p,q;
    scanf("%f%f%f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc<0)
        printf("此程序无解");
    else{
        p = -b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x1=p+p;
        x2=p-q;
        printf("题目有解,解是x1=%7.2f;x2=%7.2f\n",x1,x2);
    }

    return 0;
}