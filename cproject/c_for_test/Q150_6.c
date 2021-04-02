#include<stdio.h>

int main(void){

int a=3, b=10;

if(b>5){

    printf("%x\n",a+b);//b가 5보다 크기때문에 이걸 실행
                         //10진수 13을 16진수로 변환 10은 0A 11은 0b 12는 0c 13은 0d

    }else{
    printf("%x\n",b-a);}


    /*

                        서식문자 출력대상 출력형태
                        %d      int     부호있는 10진수
                        %u      uint    부호없는 10진수 정수
                        %o      uint    부호없는 8진수 정수
                        %x,%X   uint    부호없는 16진수 정수
                        %f      float   10진수 방식의 부동소숫점 16진수 정수                                                                    
                        */
    return 0;
}