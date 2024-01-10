import java.sql.*;

class Database {
    public static void main(String args[]) throws Exception {

        String URl = "jdbc:mysql://localhost:3306/ppa49";
        String Username = "root";
        String Password = "9689112710*Yd";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URl, Username, Password);

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

        while (robj.next()) {
            System.out.println("RID" + robj.getInt("rno"));
            System.out.println("NAme" + robj.getString("Name"));
            System.out.println("City" + robj.getString("City"));
            System.out.println("Marks" + robj.getInt("Marks"));
        }

    }
}
