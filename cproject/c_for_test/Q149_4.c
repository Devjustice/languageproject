#include<stdio.h>
int main(){


    int result,a=100,b=200,c=300;

    result=a<b?b++:--c; //b++은 후치연산이고 --c는 전치연산이므로 a가 b보다 작으면 result에 b의 값 200을 저장한 후 b를 1증가 시키고 (b++)
                        //그렇지 않으면 c에서 1을 뺀 (--c)값 299를 저장한다.

    printf("%d,%d,%d\n",result,b,c);    //result값에는 a<b의 결과 값인 200이 저장된다. 

    int test=0,i=9,j=5;

    test=j<i;
    printf("%d",test);



    return 0;
}