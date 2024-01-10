public class Array2D {
    public static void main(String Arg[]) {
        int Arr[][] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };

        int Brr[][] = new int[3][3];

        Brr[0][0] = 10;
        Brr[0][1] = 20;
        Brr[0][2] = 30;

        Brr[1][0] = 40;
        Brr[1][1] = 50;
        Brr[1][2] = 60;

        Brr[2][0] = 70;
        Brr[2][1] = 80;
        Brr[2][2] = 90;

        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + " \t");
            }
            System.out.println();
        }
    }

}

// javac Array2D.java