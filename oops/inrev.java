import reverse.Reverse;
import insert.Insert;
import java.util.*;
public class inrev {
    public static void main(String args[]) {
    Scanner s=new Scanner(System.in);
    System.out.println("enter your array size");
    int n=s.nextInt();
    int arr[]=new int[n];
    Insert a= new Insert();
    a.insert(arr, n);
    Reverse b= new Reverse();
    b.reverse(arr,n);
        
    }
}
