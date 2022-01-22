import javax.swing.*;
import java.awt.*;
public class choices{
    choices(){
    JFrame f = new JFrame("Stack");
    String s = JOptionPane.showInputDialog("Enter the number of elements");
    int n = Integer.parseInt(s);
    int arr[] = new int[n];
    int top = -1;
    JOptionPane.showMessageDialog(f,"Enter the elements");
    for(int i=0;i<n;i++){
        s = JOptionPane.showInputDialog("Enter the element");
        arr[++top] = Integer.parseInt(s);
    }
    String str = "";
    for(int i=0;i<=top;i++){
        str = str + " " + arr[i];
    }
    JOptionPane.showMessageDialog(f,"Elements are: "+str);
    }

    public static void main(String[] args) {
        new choices();
    }
}

