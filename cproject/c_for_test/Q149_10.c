#include<stdio.h>

int main(){


    int a= 5, b=10, c=15, d=30, result;


    result=a*3+b>d||c-b/a<=d&&1;

    printf("%d\n",result);

    /*
    1 : 5*3=15
    2 : 10/5=2
    3 : 15+10 = 25
    4 : 15-2 = 13
    아래틀림
    5 : 2>10 = false
    6 : 13<=30 = true
    


    
    
    */




    return 0;
}