#include<stdio.h>
//함수포인터
int sub(int i,int j){return i-j;}
int add(int i,int j){return i+j;}
int main(void){
    int i=0,j=0,result=0;   
    int (*pf)(int , int );
    scanf("%d",&i);
    scanf("%d",&j);
    pf=add;
 
    result = (*pf)(i,j);//gcc 클래식 호출
    printf("%d\n",result);    
    
    scanf("%d",&i);
    scanf("%d",&j);
    pf=sub;
    result=pf(i,j); //new버전 호출
    printf("%d\n",result);    
    return 0;}
   