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

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class clon01 {
    public static void main(String Args[]) {

        try {
            Employee eobj1 = new Employee("YOGI", 77000, 28, "Pune");

            Employee eobj2 = (Employee) eobj1.clone();

            eobj1.Display();
            eobj2.Display();
            System.out.println(eobj1.hashCode());
            System.out.println(eobj2.hashCode());

        } catch (CloneNotSupportedException obj) {
            System.out.println("Inside catch");
        }

    }

}

// javac clon01.java
// java clon01
