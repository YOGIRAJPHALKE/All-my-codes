import javafx.scene.effect.Light.Spot;

class Demo extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }
}

public class Multithreading1 {
    public static void main(String Args[]) {

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.start();
        obj2.start();
    }

}

// javac Multithreading1.java
// java Multithreading1
