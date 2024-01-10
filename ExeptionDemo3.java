
import java.util.*;

public class ExeptionDemo3 {
    public static void main(String Arg[]) {
        Demo dobj = new Demo();
        try {
            System.out.println("Inside try");
            dobj.Division();
        } catch (ArithmeticException obj) {
            System.out.println("Inside catch");
        } finally {
            System.out.println("Inside finally");
        }
    }
}

class Demo {
    public void Division() throws ArithmeticException {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 / iNo2;
        System.out.println("Division is : " + iAns);

    }
}

// javac ExeptionDemo3.java
// java ExeptionDemo3

// try {
// System.out.println("Inside Try Block");
// iAns = iNo1 / iNo2;
// } catch (ArithmeticException obj) {
// System.out.println("Inside catch block " + obj);
// } catch (ArrayIndexOutOfBoundsException obj) {
// System.out.println("Array Index Out of bounds exception" + obj);
// } catch (Exception obj) {
// System.out.println("Inside generic catch block" + obj);
// }

// finally {
// System.out.println("inside finslly block");
// }
// System.out.println("Division is : " + iAns);
// }