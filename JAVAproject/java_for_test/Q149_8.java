package java_for_test;

public class Q149_8 {

    public static void main(String args[]){
    int a= 12, b=5,sum=2; //정수형 변수 a,b,sum을 선언하고 12,5,2로 초기화한다
    b *=a /=4;
    sum += ++a * b--/4;
    System.out.printf("%d",sum);
    
}
}
