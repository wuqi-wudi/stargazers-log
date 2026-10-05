/*
Use 1-jiao,2-jiao and 5-jiao coins to make up 10 yuan
使用一角、两角和五角的硬币去凑出十元
*/
#include <stdio.h>
int main(void){
int one, two,five;
for(one=0;one<=100;one++){
    for(two=0;two<=50;two++){
        for(five=0;five<=20;five++){
            if(one+two*2+five*5==100){
                printf("可以用%d个一角，%d个两角，%d个五角凑出十元",one,two,five);
            }
        }
    }
}
    return 0;
}