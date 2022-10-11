// 判断闰年
#include <stdio.h>
int main(){
    int x;
    printf("请输入你要进行判断的年份：");
    scanf("%d",&x);
    if(x%4==0){
        if(x%100==0){
            printf("%d是闰年",x);
        }
        else
        {
            if(x%400==0)
                printf("%d是闰年",x);
            else printf("%d非闰年",x);
        }
    }
    else printf("%d非闰年",x);
    return 0;
}