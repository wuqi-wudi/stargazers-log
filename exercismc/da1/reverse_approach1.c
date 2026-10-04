#include <stdio.h>
int main(void){
    int num,reverse = 0,place_value_multiplier = 1;
    printf("请输入一个整数\n");
    scanf("%d",&num);
    int num1 = num;
    while(num1 != 0){
        num1 /= 10;
        place_value_multiplier *= 10; 
    }
    place_value_multiplier /= 10;
    num1 = num;
    int digit;
    while(num1 != 0){
        digit = num1 % 10;
        reverse += digit*place_value_multiplier;
        place_value_multiplier /= 10;
        num1 /= 10;
    }
    printf("%d的反转是%d",num,reverse);
    return 0;
}