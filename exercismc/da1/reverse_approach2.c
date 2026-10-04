#include <stdio.h>
int main(void){
    int num,reverse = 0,num1;
    printf("请输入一个整数\n");
    scanf("%d",&num);
    num1 = num;
    while(num != 0){
        reverse = reverse*10 + num%10;
        num /= 10;
}
printf("%d的反转是%d\n",num1,reverse);
return 0;
}