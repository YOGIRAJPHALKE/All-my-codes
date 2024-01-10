class Employee {
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

    protected void finalized() {
        System.out.println("Finalized ");
    }

    void Display() {
        System.out.println("Emoloyee name: " + this.Name);
        System.out.println("Emoloyee Age: " + this.Age);
        System.out.println("Emoloyee Salary: " + this.Salary);
        System.out.println("Emoloyee Address: " + this.Address);
    }
}

public class HashCode {
    public static void main(String Args[]) {
        Employee eobj = new Employee("YOGI", 77000, 28, "Pune");
        Employee eobj2 = eobj;
        Employee eobj3 = new Employee("Dish", 75000, 21, "Baramti");
        eobj.Display();

        System.out.println("Hash code is: " + eobj.hashCode());
        System.out.println("Hash code is: " + eobj2.hashCode());
        System.out.println("Hash code is: " + eobj3.hashCode());
        
        eobj = null;
        System.gc();
    }

}
