
import java.util.*;

class ExeptionDemo2 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int Arr[] = { 10, 20, 30, 40, 50 };

        System.out.println("Enter the index from where you want tofetch the data");
        int iIndex = sobj.nextInt();

        System.out.println("Data is :" + Arr[iIndex]);
    }
}

// javac ExeptionDemo2.java
// java ExeptionDemo2