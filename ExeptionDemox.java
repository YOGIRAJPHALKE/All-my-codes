
import java.util.*;

public class ExeptionDemox {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        try {
            System.out.println("Inside Try Block");
            iAns = iNo1 / iNo2;
        } catch (ArithmeticException obj) {
            System.out.println("Inside catch block " + obj);
        } catch (ArrayIndexOutOfBoundsException obj) {
            System.out.println("Array Index Out of bounds exception" + obj);
        } catch (Exception obj) {
            System.out.println("Inside generic catch block" + obj);
        }

        finally {
            System.out.println("inside finslly block");
        }
        System.out.println("Division is : " + iAns);
    }
}

// javac ExeptionDemox.java
// java ExeptionDemox