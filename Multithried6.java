
class Demo extends Thread {
    public void run() {

        for (int i = 1; i < 1000; i++) {
        }
        System.out.println("End of thread");
    }
}

class Multithried6 {
    public static void main(String arg[]) throws Exception {

        System.out.println("current thred is :" + Thread.currentThread().getName());

        Demo obj1 = new Demo();

        obj1.setName("First_Thread");
        obj1.start();
        obj1.join();
        System.out.println("end of main thread");

    }

}

// javac Multithried6.java
// java Multithried6