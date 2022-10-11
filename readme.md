> 本文档用于记录C语言课程中编写的代码，以及编写程序是遇到的问题

## 第一章课后习题

### 输出hello，world

```c
#include <stdio.h>
int main()
{
	printf("hello,world\n");
	return 0;
}
```

### 三位数比较大小

```c
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
```

## 输出5的阶乘

```c
#include <stdio.h>
int main()
{
int x;
int p;
p=1;
for(x=2;x<=5;x++)
{
p=p*x;

}
printf("%d",p);

}
```

### 判断闰年

```c
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
```

### 1到100加法

```c
#include <stdio.h>
int main(){
    int x;
    int sum;
    for (x=1;x<=100;x++){
        sum = sum+x;
    }
    printf("%d",sum);
    return 0;
}
```

