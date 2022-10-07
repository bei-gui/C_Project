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

