
class Multithried8 {
    public static void main(String arg[]) throws Exception {

        System.out.println("current thred is :" + Thread.currentThread().getName());

        Demo obj1 = new Demo();

        obj1.setName("First_Thread");
        obj1.start();
        obj1.join();
        System.out.println("end of main thread");
    }
}

class Demo extends Thread {
    public void run() {

        for (int i = 1; i < 10; i++) {
            try {
                System.out.println("value of i is " + i);
                Thread.sleep(1000);
            } catch (Exception obj) {

            }
        }
        System.out.println("End of thread");
    }
}

// javac Multithried08.java
// java Multithried08