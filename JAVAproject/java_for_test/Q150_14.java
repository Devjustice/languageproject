package java_for_test;

public class Q150_14 {

    public static void main(String args[]){

        String str = "Programming";
        int n = str.length();
        char []st= new char[n];
                n--;
            for(int k=n;k>=0;k--){
                st[n-k]=str.charAt(k); //charAt()메서드는 문자열에서 지정된 위치의 문자를 반환

            }for(char k : st){System.out.printf("%c",k);}

    }
    
}
