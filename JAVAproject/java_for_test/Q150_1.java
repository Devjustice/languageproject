package java_for_test;

public class Q150_1 {




public static void main(String args[]){

    /*문제 : 10진수를 2진수로 만드는 프로그램을 만들 때
    빈칸에 들어갈 것은?
    
    
    
int a [] = new int [8];
int i = 0;
int n = 10;
while (`빈칸`){

a[i++]=`빈칸`;
n/=2;
}
for(i=7;i>=0;i--){


    System.out.print(a[i]);


}*/

/*
풀이 10진수 15를 2진수로 변환하는 경우
15/2 ...1
7/2  ...1
3/2  ...1 
1

1111이 된다

따라서 n%2를 a배열에 저장
while (n>0)
*/

int a [] = new int [8];
int i = 0;
int n = 10;
while (n>0){

a[i++]=n%2;
n/=2;
}
for(i=7;i>=0;i--){


    System.out.print(a[i]);


}

}



}