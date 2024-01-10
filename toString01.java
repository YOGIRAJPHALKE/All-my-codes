class Employee implements Cloneable {
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String add) {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = add;
    }

    void Display() {
        System.out.println("Emoloyee name: " + this.Name);
        System.out.println("Emoloyee Age: " + this.Age);
        System.out.println("Emoloyee Salary: " + this.Salary);
        System.out.println("Emoloyee Address: " + this.Address);
    }

    public String toString(){
        return "Yogiraj";
    }

}

public class toString01 {
    public static void main(String Args[]) {

        Employee eobj1 = new Employee("YOGI", 77000, 28, "Pune");
        
        System.out.println(eobj1);// it calls toString method internally
    }

}

// javac toString01.java
// java toString01
