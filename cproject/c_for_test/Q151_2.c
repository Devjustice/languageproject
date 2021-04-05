#include<stdio.h>
int main(void){

char a[]={'A','B',"C","D","E","F"};
char *p;
p=&a[2];//C
printf("%c,%c\n",*p,*(p-2)); //c,a


    return 0;
}