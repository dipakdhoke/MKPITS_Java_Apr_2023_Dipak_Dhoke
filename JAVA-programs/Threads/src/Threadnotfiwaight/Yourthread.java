package Threadnotfiwaight;

public class Yourthread extends Thread {
    int sum=0;
    @Override
    public synchronized void run() {

        for (int i=0;i<50;i++){
            sum=sum+i;

        }
        System.out.println("sum is:"+sum);
        notify();
    }

}
