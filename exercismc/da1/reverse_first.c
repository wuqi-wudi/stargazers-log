/*
Reverse Number
注意：（attention:）
1、输入数可为正、负数和零（1、input number may is positive、negative number or zero)
2、输入数有零（1、input number may have zero）
*/
#include<stdio.h>
int main(){
    /*num:用户输入的数字（user input number)
    reverse:输入数字的反转（reversed input number)
    num_1:去储存原来的数字（to story original number)
    n:表示输入的数字有几位数（represent how digitals the input number has)
    a:用来表示数位的倍数（to represent multiple of digitals)
    x:为转化的各个位数为过渡（for each digital reversing to transition)
    */
    int num,reverse = 0,num_1,n = 1,x = 1,a = 1;
    printf("请输入一个整数\n");
    scanf("%d",&num);
    num_1 = num;
    if(num != 0){
        //判断num的数位,让a表示倍数（define the digitals of num，let a represent multiple)
        while(num != 0)
        {
            num /= 10;
            a *= 10;
        }
    }
    //上面a大了十倍（a is ten time bigger upward)
        a /= 10;
        //num变成了最初输入的数字（num turn into inital input number)
        num = num_1;
    while(num != 0){
        //处理数中的零（deal with zero in number)
        //num>10、num<-10保证不陷入无限循环（num>10、num<-10 guarantee don't get into infinite circulation)
        if((num % 10==0 && num>=10)||(num % 10==0&& num<=-10) ){
            num /= 10;
            a/=10;
        }
        else{
            x= num % 10 * a;
            a /= 10;
            num /= 10;
            reverse += x;}
        }    
        printf("%d的逆序是%d",num_1,reverse);
        return 0;    
    }