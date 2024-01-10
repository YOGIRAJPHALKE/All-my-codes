
class Arithmatic {
    public int addition(int A, int B) {
        return A + B;
    }

    public int addition(int A, int B, int C) {
        return A + B + C;
    }

    public double addition(double A, double B) {
        return A + B;
    }

}

public class oerloaving {
    public static void main(String arg[]) {
        Arithmatic aobj = new Arithmatic();
        int iRet = 0;
        double dRet = 0.0;

        iRet = aobj.addition(10, 11);
        System.out.println("Addition is : " + iRet);
        iRet = aobj.addition(10, 11, 21);
        System.out.println("Addition is : " + iRet);
        dRet = aobj.addition(10.8, 11.7);
        System.out.println("Addition is : " + dRet);
    }

}
