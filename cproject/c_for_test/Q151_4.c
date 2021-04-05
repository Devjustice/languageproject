#include<stdio.h>
int main(void){

int k,n ;
char temp;
char st[]="I am Tom!" //9EA
n=strlen(st);//문자열의 길이를 구하는 함수 n에 9가 들어감
n--;//마지막 널문자 제거 0~8까지 길이 임 n=8
for(k=0;k<n;k++){ //0                                      원래 1 2 3 4 5 6 7 8 /9 
    temp=*(st+k); // 9=9+0 / temp에 문자열 저장 k는 n까지 n은 널 값 제외 
                  //제일 첫 글자인 *(st+k)를 임시변수에 저장
                  //문자끝까지 반복해서 도는 n  쓰레드 펑션 같이 반복문을 생각해보자
    *(st+k)=*(st+n); // 9=9+8/ 제일 뒷글자*(st+n)을 제일 첫글자 *(st+k)에 넣음
    *(st+n)=temp; //임시변수에 담긴 문자를 다시 제일 첫글자에 넣음.
    n--; //반복문을 돌 때마다 이전문자에 있는 배열로 낮아지는 것
}

printf("%s\n",st);



    return 0;

}