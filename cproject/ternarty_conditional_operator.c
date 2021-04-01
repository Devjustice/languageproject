#include<stdio.h>

short main(){

    int num1 = 5;
    int num2 = 0;

    num2 = num1 ? 100 : 200; // num1이 참이면 num2에 100할당,
                             // 거짓이면 num2에 200할당

    printf("%d\n",num2);



    return 0;
}