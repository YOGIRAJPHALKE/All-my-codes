import java.io.*;

public class DeletFile {
    public static void main(String Args[]) {
        try {
            File fobj = new File("PPA.txt");
            fobj.delete();

        } catch (Exception fobj) {

        }
    }
}

// javac DeletFile.java