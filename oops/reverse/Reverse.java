package reverse;
public class Reverse {
    public void reverse(int arr[],int n) {
        System.out.println("reversed array is");
        for(int i=n;i>0;--i)
        System.out.printf("%d ",arr[i-1]);
        
    }
}
