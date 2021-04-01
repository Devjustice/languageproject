package java_for_test;

public class Q149_8 {

    public static void main(String args[]){
    int a= 12, b=5,sum=2; //정수형 변수 a,b,sum을 선언하고 12,5,2로 초기화한다
    b *=a /=4;              /*
    
    a/=4 = 3
    b*3  = 15
    a=3
    b=15
    
      */
    sum += ++a * b--/4;
    
    /*
    ++a = 4
    --b = 15 
        4*15 =60
        60/4 = 15

            15+2 = 17
            sum = 17
    
    
    */
    
    System.out.printf("%d",sum);
    
}
}
