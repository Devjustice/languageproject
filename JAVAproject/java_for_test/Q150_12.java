package java_for_test;

public class Q150_12 {

    public static void main(String args[])

{
    int [][]a = {{11,12,13,14},{21,22,23,24}};//2행 열의 크기를 갖는 정수형 배열 a가 선언되고
    //중괄호 속 괄호는 행을 구분한다.

    int hap=0;
    for (int i[] : a){

        for(int j : i){

            hap = hap +j;

        }
        System.out.printf("%d",hap);
    }






}

    
}
