public class arithmeticexcep {
 public static void main(String args[]){
    try{
        int num1=30,num2=0;
        int output=num1/num2;  
    }catch(ArithmeticException e){
        System.out.println("Exception occured"+e);

    }
    try{
        int arr[]={1,2,3,4,5};
        int index=10;
        int output=arr[index];
    }catch(ArrayIndexOutOfBoundsException e){

        System.out.println("Exception occured"+e);


    }
 }   
}
