/*
从零开始求数的前64平方和（get sum of square of number form zero)
*/
#include <stdio.h>
int main(void){
    int sum (int x)
    {
        unsigned long long count=0,sum=1;
    for(int i=1;i<64;i++){
        count+=sum;
        sum*=x;
        }
        return count;
    }
    unsigned long long b=sum(2);
    printf("%llu",b);
    return 0;
    }

