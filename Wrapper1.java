
public class Wrapper1 {
    public static void main(String Args[]) {
        int no = 11;

        Integer iobj = no;  //Boxing

        System.out.println(no);
        System.out.println(iobj);

        int i = iobj; //Unboxing
        System.out.println(i);
    }

}

// javac Wrapper1.java
// java Wrapper1
