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
        1: 0000 0001
        1<<3;
        8: 0000 1000
        
        0000 0001
        0000 1000

        1|8

        0000 1001

        9
        c=9
        
        */

        c=a<5 || c>=10 ? c-a:c+a;

        /*
       a=5, c=9 

       5<5 = flase 
       9>=10 = flase
       c-a=9+4
       c=13
        
        
        */

        System.out.printf("%d",c);

    }

}
