  class UserException extends Exception{
    UserException(String message){
        super(message);
    }
}
public class UserDefinedExcep {
    public static void main(String args[]) {
         try{
             int a=1,b=0,c=a/b;
         }
         catch(ArithmeticException e){
            try{
                throw new UserException("cannot divide by zero");
            }
            catch(UserException e1){
                System.out.println(e1);
            }
            }
         }    
    }

// class UserException extends Exception {
//     UserException(String msg) {
//     super(msg);
//     }
//     }
//     public class UserDefinedExcep {
//     public static void main(String[] args) {
//     try {
//     int a = 1;
//     int b = 0;
//     int c = a / b;
//     } catch(ArithmeticException e) {
//     try {
//     throw new UserException("Cannot Divide By Zero");
//     } catch(UserException err) {
//     System.out.println(err.toString());
//     }
//     }
//     }
//     }
