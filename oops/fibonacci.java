public class fibonacci {
static int n1=0,n2=1,n3=0;
static void printfibonacci(int n){
    if(n>0){
        n3=n2+n1;
        n1=n2;
        n2=n3;
        System.out.println(" "+n3);
        printfibonacci(n-1);

}}
public static void main(String args[]) {
    printfibonacci(10);

}
    
}