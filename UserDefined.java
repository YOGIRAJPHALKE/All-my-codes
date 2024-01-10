import java.util.*;

public class UserDefined {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age : ");
        int iAge = sobj.nextInt();
        try {
            if (iAge < 18) {
                throw new AgeInvalid("Your age is below 18");
            } else {
                System.out.println("Login Succesful..");
            }
        } catch (AgeInvalid obj) {

            System.out.println("Inside catch block");
            System.out.println(obj);
        }
    }

}

class AgeInvalid extends Exception {
    public AgeInvalid(String str) {
        super(str);
    }
}

// javac UserDefined.java
// java UserDefined