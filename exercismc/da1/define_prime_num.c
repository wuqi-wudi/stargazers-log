/*
This is a program to check for prime num.(这是一个判断素数的程序)
*/
#include <stdio.h>
int main(void){
    int num;
    printf("请输入一个整数：\n");
    scanf("%d",&num);
    if(num<2){
        printf("%d不是素数",num);
    }
    //处理2和3（handle 2 and 3 ,which are prime numbers)
    else if(num==2||num==3){
        printf("%d是素数",num);
    }
    //用2和3验证节约时间（save time by pre-checking divisibility by 2 and 3)
    else if(num%2==0){
        printf("%d不是素数",num);
    }
    else if(num%3==0){
        printf("%d不是素数",num);
    }
    else{
        //这利用了如果i加到了num,她就是素数（if the loop runs all the ways to num ,the num is prime number)
        for(int i=5;i<=num;i+=2){
            if(num%i==0&&i<num){
                printf("%d这个数不是素数",num);
                break;
            }
            if(i==num) {
                printf("%d是素数",num);
            }
        }
    }
    return 0;
}