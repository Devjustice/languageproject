#include<stdio.h>
int main(){


int a=5;
int b=5;

int pre , post =0;

pre =(++a)*3;
post =(b++)*3;


printf("초깃값 a = %d, b =%d\n",a,b);
printf("전위형 (++a) *3 = %d, 후위형 (++b) =%d\n",pre,post);
printf("후깃값 a = %d, b =%d\n",a,b);






    return 0;
}