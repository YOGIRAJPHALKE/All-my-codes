public class Array3 {
    public static void main(String Arg[]) {
        int Arr[][] = { { 10, 20, 30 }, { 40, 50 }, { 60, 70, 80 }, { 90, 100, 110, 120, 130 }, { 140 } };

        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

}

// javac Array2D.java