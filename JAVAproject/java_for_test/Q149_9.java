package java_for_test;

public class Q149_9 {
    
    public static void main(String args[]){

        int a=5, b=9, c=0;

        c=b%5<5?1:0;
        /*
        9%5=4
        4<5=5
        c=1
        */

        c=c|c<<3;

        /*
        
        
        */

        c=a<5 || c>=10 ? c-a:c+a;

        

        System.out.printf("%d",c);

    }

}
