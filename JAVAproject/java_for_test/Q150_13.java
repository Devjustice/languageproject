package java_for_test;
import java.util.Scanner;


public class Q150_13 {

public static void main(String args[]){


Scanner scan = new Scanner(System.in);
int a = scan.nextInt();//a=8,b=3입력한다.
int b = scan.nextInt();
char c ='G';

if(a>10&&b<10){  //a가 10보다 크고 b가 10보다 작으면다음 아니면 19line로 이동한다.
    if((a-b)<5||a>15)
    c='X';

}else if(a>5&&b<5){ //여기서 참이기 때문에 아래 if 로 내려감
    if(a-b<3||b>0) // a-b=5 flase, b>0 true 이기때문에 or연산 참이기 때문에
    //c에 Y입력하고 끝 
    c='Y';

}else 
c='Z';
System.out.printf("%c",c);
scan.close();





}









}