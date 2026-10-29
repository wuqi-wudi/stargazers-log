/*
位运算求奇偶性
*/
#include <stdio.h>
int main(void){
    int num;
    printf("请输入一个整数求奇偶性\n");
    scanf("%d",&num);
    if((num&1)==0){
        printf("这个数是偶数\n");
    }
    else{
        printf("这个数是奇数\n");
    }
    return 0;
}