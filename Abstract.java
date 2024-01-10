import javafx.scene.effect.Light.Spot;

abstract class Demo {
    public int A;
    public int B;

    public Demo() {
        System.out.println("Inside constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun(); // virtual void fun()=0;

    void gun() {
        System.out.println("Inside gun");
    }
}

class Hello extends Demo {
    public Hello() {
        System.out.println("Inside Hello constructor");
    }

    void fun() {
        System.out.println("Inside Hello Fun");
    }
}

public class Abstract {
    public static void main(String arg[]) {
        Hello obj = new Hello();
        obj.fun();
        obj.gun();
    }
}
