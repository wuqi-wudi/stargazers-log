#include <stdio.h>
int main(void){
    int num,digit,reverse = 0,num1;
    printf("请输入一个整数");
    scanf("%d",&num);
    num1 = num;
    while(num != 0){
        reverse *= 10;
    reverse += num%10;
    num /= 10;
    printf("%d",reverse);
}
return 0;
}