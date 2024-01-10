
class Demo {
    public int A;
    public final int B;

    Demo() {
        A = 11;
        B = 20;
    }

    Demo(int i, int j) {
        A = i;
        B = j;
    }
}

public class Final {
    public static void main(String args[]) {
        Demo dobj = new Demo();
        dobj.A++;
        // dobj.B++;
        System.out.println("Value of A:" + dobj.A);
        System.out.println("Value of A:" + dobj.B);

        Demo dobj2 = new Demo(11, 121);
        System.out.println("Value of A:" + dobj2.A);
        System.out.println("Value of A:" + dobj2.B);

    }

}

// javac Final.java