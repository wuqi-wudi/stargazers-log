/*
This is a program to define prime num.(这是一个判断素数的程序)
*/
#include <stdio.h>
int main(void){
    int num;
    printf("请输入一个整数：\n");
    scanf("%d",&num);
    if(num<2){
        printf("%d不是素数",num);
    }
    //确保2和3是素数（guarantee 2 and 3 is prime)
    else if(num==2||num==3){
        printf("%d是素数",num);
    }
    //用2和3验证节约时间（save time by diveding 2 or 3)
    else if(num%2==0){
        printf("%d不是素数",num);
    }
    else if(num%3==0){
        printf("%d不是素数",num);
    }
    else{
        //这利用了如果i加到了num,她就是素数（Utilizing that if i add to num  ,it is prime num)
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