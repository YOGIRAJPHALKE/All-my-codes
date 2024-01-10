public class ClassDemo {

    public static void main(String arg[]) {
        System.out.println("Inside main");

    }

}

class Marvellous {
    public int i;
    public int j;

    public Marvellous() {
        System.out.println("inside defult constructor");
    }

    public Marvellous(int a, int b) {
        System.out.println("inside parameterised constructor");
    }

    public void fun() {
        System.out.println("inside fun method");
    }

}

// javac ClassDemo.java