#include<stdio.h>

int main(){


int i = 10, j=10, k=30;

i /= j; // i=j/j 와 같다. 즉 i=10/10으로 i에 1이 저장
j -= i; // j= j-1과 같다. j-10-1로 j에는 9가 저장된다.
k %= j; // k= k%j와 같다. k=30%9로 3이 저장된다.

printf("%d,%d,%d\n",i,j,k);



    return 0;

}