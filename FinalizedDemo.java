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

    void Display() {
        System.out.println("Emoloyee name: " + this.Name);
        System.out.println("Emoloyee Age: " + this.Age);
        System.out.println("Emoloyee Salary: " + this.Salary);
        System.out.println("Emoloyee Address: " + this.Address);
    }
}

public class FinalizedDemo {
    public static void main(String Args[]) {
        Employee eobj = new Employee("YOGI", 77000, 28, "Pune");
        eobj.Display();
    }
}

// javac FinalizedDemo.java
// java FinalizedDemo