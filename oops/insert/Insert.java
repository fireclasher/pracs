package insert;
import java.util.*;
public class Insert{
    public  void insert(int arr[],int n) {
        Scanner s=new Scanner(System.in);
        System.out.println("enter elements of array");
        for(int i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        
    }
}