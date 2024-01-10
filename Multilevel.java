
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

class DerivedX extends Derived {
    public int P, Q;

    public DerivedX() {
        System.out.println("DerivedX constructor");
    }
}

class Multilevel {
    public static void main(String args[]) {
        DerivedX dobj = new DerivedX();
        dobj.Fun();
        dobj.Gun();
    }
}