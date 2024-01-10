
class Base {
    public int A, B;

    Base() {
        System.out.println("Base constructor");
    }

    public void Fun() {
        System.out.println("Base fun");

    }
}

class Derived extends Base {
    public int X, Y;

    Derived() {
        System.out.println("Derived constructor");
    }

    public void Gun() {
        System.out.println("Base gun");

    }
}

class singal {
    public static void main(String args[]) {
        Derived dobj = new Derived();
        dobj.Fun();
        dobj.Gun();
    }
}