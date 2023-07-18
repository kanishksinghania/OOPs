import java.util.Scanner;

class Student {
    private int prn;
    private int rollno;
    private int age;
    private String panel;
    private String name;

    public void insert() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter PRN:");
        prn = sc.nextInt();
        System.out.println("Enter Roll No.:");
        rollno = sc.nextInt();
        System.out.println("Enter Age:");
        age = sc.nextInt();
        System.out.println("Enter Panel:");
        panel = sc.next();
        System.out.println("Enter Name:");
        name = sc.next();
    }

    public void display() {
        System.out.println("\nStudent details:");
        System.out.println("Name: " + name);
        System.out.println("PRN: " + prn);
        System.out.println("Age: " + age);
        System.out.println("Roll No.: " + rollno);
        System.out.println("Panel: " + panel + "\n");
    }

    public Student() {   
        prn = 1032211295;
        age=0;
        rollno = 27;
        panel = "H";
        name = "K";
    }

    public Student(int p, int r, int a,String pa, String n) {
        prn = p;
        rollno = r;
        age=a;
        panel = pa;
        name = n;
    }

  
}

public class OOCCJ_1b {
    public static void main(String[] args) {
        Student a = new Student();
        Student b = new Student(1032211295,0, 27, "H", "Kanishk");
        b.insert();
        System.out.println("Default Constructor: ");
        a.display();
        System.out.println("Parametrized Constructor: ");
        b.display();
    }
}