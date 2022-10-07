#include <stdio.h>
int main()
{
    int a,b,c,x;
    printf("请输入三位数并用逗号间隔：");
    scanf("%d,%d,%d",&a,&b,&c);
    x = a;
    if(b>x)
        x = b;
    if(c>x)
        x = c;
    printf("三位数中的最大数是%d",x);
    return 0;
}