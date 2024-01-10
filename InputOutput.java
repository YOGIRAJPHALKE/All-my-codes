import java.util.Scanner;
import java.util.*;

public class InputOutput {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter first number : ");
        int No1 = sc.nextInt();

        System.out.println("enter second number : ");
        int No2 = sc.nextInt();

        int Ans = 0;
        Ans = No1 + No2;

        System.out.println("Addition is : " + Ans);

    }

}
