import java.util.Scanner;
public interface prime {
    public void isPrime(int n);
}
class primecheck implements prime {
    public void isPrime(int n){
    boolean flag=false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=true;break;
        }
    }
    System.out.printf("the given number is %s",flag?"not prime":"prime");
}
public static void main(String args[]) {
    Scanner s=new Scanner(System.in);
    System.out.println("enter the number");
    int n=s.nextInt();
    primecheck p=new primecheck();
    p.isPrime(n);
    s.close();
    
}
}

