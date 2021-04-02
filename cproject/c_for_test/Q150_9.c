#include<stdio.h>

int main(void){

    int i=10,hap=0;

    while(i>1){ 
    i--;        //9-8-6-5-4-3-1

    if(i%3==1)//9-8-7-6-5-3
        
    {hap+=i;}//hap=0+7,hap=7+4,hap=11+1
                

    }
        printf("%d\n",hap);


    return 0;


}