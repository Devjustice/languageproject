package java_for_test;

import java.util.Scanner;

public class Q149_3 {


public static void main(String args[]){

        Scanner scan = new Scanner(System.in); //Scanner 클래스의 객체변수 Scan을 키보드로 입력 받을 수 있도록 생성한다.
                                                //System.in 은 표준 입력장치, 즉 키보드를 의미한다.
        int a = scan.nextInt();                 //정수형 변수 a를 선언하고 정수형 값을 입력받아 a에 저장한다.
            int b = scan.nextInt();             //정수형 변수 b를 선언하고 정수형 값을 입력받아 b에 저장한다.
            System.out.printf("%d",a+b);        //화면에 a와 b의 합을 출력한다.
            scan.close();                       //scan객체가 확보한 메모리 영역을 해제한다.


}

    
}
