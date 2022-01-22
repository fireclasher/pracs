import java.util.*;
public class leap {
    public static void check(int year){
        boolean flag =(year%4==0)&&(year%100!=0)||(year%400==0);
            System.out.printf("the given year is %s leap year",flag?"":"not");

        
    
    }
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        System.out.println("enter the year");
        int year=s.nextInt();
        check(year);
        s.close();
    }
}
