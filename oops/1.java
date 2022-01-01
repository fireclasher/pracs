//Design a Java interface for ADT Stack. Implement this interface using array.Display the result
//for the following input 3,4,5,9,77 and print the output
 
interface StackInterface {
    int n = 20;
    public void push(int ele);
    public void display();
    }
    class StackADT implements StackInterface {
    int arr[] = new int[n];
    int top = -1;
    public void push(int ele) {
    arr[++top] = ele;
    }
    public void display() {
    if (top < 0) {
    System.out.println("Stack is empty");
    return;
    } else {
    String str = "";
    for (int i = 0; i <= top; i++)
    str = str + " " + arr[i];
    System.out.println("Elements are: " + str);
    }
    }
    }
    public class stack {
    public static void main(String[] arg) {
    StackADT stk = new StackADT();
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(9);
    stk.push(77);
    stk.display();
    }
    }