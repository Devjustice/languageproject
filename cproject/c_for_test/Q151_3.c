#include<stdio.h>
int main(void){


    int a[5],b=1;sum=0;
    for(int i = 0; i<5; i++){ // 0 1 2 3 4 5

            a[i]=b; //a[0]=1 ,a[1]=2 ,a[2]=4,a[3]=8,a[4]=16,a[5]=32
            b*=2; //2,4,8,16,32,64

    }//b=64,a[0]=1 ,a[1]=2 ,a[2]=4,a[3]=8,a[4]=16,a[5]=32, i=6

for(int i = 0; i<5 ; i+=2){//0 2 4 6
    sum += *(a+i);//1+4+16=21
}
printf("%d",sum);


    return 0;
}

/*







 * /