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