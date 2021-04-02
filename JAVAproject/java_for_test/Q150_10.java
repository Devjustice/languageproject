package java_for_test;

public class Q150_10 {

    public static void main(String args[]){

        int i=0;int hap=0;
        for(i=1;i<=10;i++){//1,2,3,4,5,6,7,8,9,10
            hap+=i;//1,3,6,10,15,21,28,36,45,55 hap=55
            //

        }
            //반복문을 빠져나갈 때는 결과가 거짓이 되도록 증가한 후 빠져나감 따라서 i=11
        System.out.printf("%d,%d\n",i,hap);
    }
    
}
