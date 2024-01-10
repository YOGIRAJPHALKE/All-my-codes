
class Demo extends Thread {
    public void run() {
        String name = Thread.currentThread().getName();
        System.out.println("current thred is :" + Thread.currentThread().getName());
        for (int i = 1; i < 1000; i++) {
            System.out.println("Name of thread is : " + name + "with counter : " + i);
        }
    }
}

class MultiThreading07 {
    public static void main(String arg[]) {

        System.out.println("current thred is :" + Thread.currentThread().getName());

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");

        obj1.start();
        obj2.start();

    }

}

// javac MultiThreading07.java
// java MultiThreading07