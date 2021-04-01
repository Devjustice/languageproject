#include<stdio.h>
int main(){

    int i,j;                //scanf 입력값 15#22
  //  scanf("%o#%x", &i,&j); //#을 기준으로 입력값을 구분하여 앞에 입력된 수는 정수형 8진수로 뒤에 입력된 정수형 16진수로 각각 변수 
                           // i와 j에 저장한다. 
puts("10진수 i=15 j=22를 담기");
    i=15,j=22;


    printf("8진수 i는%o,  16진수 j는%x\n",i,j);    //8진수 15를 10진수로 변환하여 출력한 다음 공백 한칸 띄우고 16진수 22를 10진수로 변환하여 출력한다.
    printf("10진수 i는 %d, j는 %d",i,j);                                    
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
/*
int test(){

   int i=0;j=0;
    for(i=0;i<20;i++){
        printf("%d",i);

    }



    return x;
}*/