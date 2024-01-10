
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

class DerivedX extends Base {
    public int P, Q;

    public DerivedX() {
        System.out.println("DerivedX constructor");
    }
}

class Hirarchial {
    public static void main(String args[]) {
        DerivedX dobj1 = new DerivedX();
        Derived dobj2 = new Derived();

    }
}