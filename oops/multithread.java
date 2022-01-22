import java.util.Random;

class RandomNumberThread extends Thread{
    public void run(){
        Random ra=new Random();
        int r=ra.nextInt(100);
        for(int i=0;i<10;i++){
            System.out.println(r);
            if(r%2==0){
                squareThread sthread=new squareThread(r);
                sthread.start();
            }  
            else{
                cubeThread cthread=new cubeThread(r);
                cthread.start();

            }
        }try{
            Thread.sleep(10000);

        }catch(InterruptedException e){
            System.out.println(e);
        }
    }
}

class squareThread extends Thread{
    int n;
    squareThread(int randomINteger){
        n=randomINteger;
    }
    public void run(){
        
            System.out.println(n*n);
        }
    }
    class cubeThread extends Thread{
        int n;
        cubeThread(int randomINteger){
            n=randomINteger;
        }
        public void run(){
            
                System.out.println(n*n*n);
            }
        }
public class multithread{
    public static void main(String args[]){
        RandomNumberThread rthread=new RandomNumberThread();
        rthread.start();
    }
}