import java.util.*;

class Arithmatic {
    public int Value1;
    public int Value2;

    public Arithmatic(int A, int B) {
        this.Value1 = A;
        this.Value2 = B;
    }

    public int Addition() {
        int Result = 0;
        Result = this.Value1 + this.Value2;
        return Result;
    }

    public int Substraction() {
        int Result = 0;
        Result = this.Value1 - this.Value2;
        return Result;
    }
}

class OOP {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int No1 = 0, No2 = 0, Ans = 0;
        System.out.println("Enter 1st number : ");
        No1 = sc.nextInt();
        System.out.println("Enter 2nd number : ");
        No2 = sc.nextInt();
        Arithmatic aobj = new Arithmatic(No1, No2);
        Ans = aobj.Addition();
        System.out.println(("addition is : " + Ans));

        Ans = aobj.Substraction();
        System.out.println(("addition is : " + Ans));

    }

}