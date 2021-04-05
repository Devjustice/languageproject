#include<stdio.h>
int main(void){


    int a[]= {85,75,50,100,95};
    align(a);
    for(int i = 0; i<5; i++){
        printf("%d",a[i]); //여기는 출력문 이상의 의미가 없다.
       }

    void align(int a[]){


        int temp;
    for(int i=0; i<4 ;i++){ //0 1 2 3 4 /5 
    for(int j=0; j<4-i;j++){ //4-0 4-1 4-2 4-3 4-4 /마지막원소부터 프로세싱해라는 주문
        if(a[j]>a[j+1]){ //마지막 배열원소가 이전 원소보다 작을 경우 비교해라
        temp=a[j]; //이전원소를 임시변수에 넣고 
        a[j]=a[j+1]; // 마지막원소를 이전 원소의 위치에 넣어라
        a[j+1]=temp; //그리고 다시 마지막원소에 이전원소를 넣어라



        return ;
}
}



    }

    }





    return 0;

}