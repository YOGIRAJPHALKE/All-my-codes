import Marvellous.math;
import Marvellous.Infosystems.Arithmatic;

public class PackageDemo {
    public static void main(String arg[]) {
        math mobj = new math();
        Arithmatic aobj = new Arithmatic();

        int iRet = 0;
        iRet = mobj.Addition(10, 11);
        System.out.println("Addition is : " + iRet);
        iRet = aobj.Substraction(15, 11);
        System.out.println("Substraction is : " + iRet);

    }
}
