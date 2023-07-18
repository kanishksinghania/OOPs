import java.util.Scanner;

class Employee {
	double salary;
	
	public Employee() {
		salary=20000;
		}
	
	public void GetSalary(){
		 Scanner sc = new Scanner(System.in);
		 System.out.println("Enter salary :");
		 salary=sc.nextInt();
		 System.out.println("Salary before hike is: "+salary);
	
	}
	 
	public void DisplaySalary() {
		System.out.println(+salary);
		}
 	}
		
class FulltimeEmployee extends Employee {
	public void CalculateSalary() {
		salary=salary+(salary*0.5);
		}
	}
	
class InternEmployee extends Employee {
	public void CalculateSalary() {
		salary=salary+(salary*0.25);
		}
	}
	
public class OOCCJ_2b {
	public static void main(String[] args) {
	
	FulltimeEmployee o1 = new FulltimeEmployee();
	InternEmployee o2 = new InternEmployee();
	o1.GetSalary();
	o1.CalculateSalary();
	System.out.println("Increased salary of fulltime employee after hike: ");
	o1.DisplaySalary();
	o2.GetSalary();
	o2.CalculateSalary();
	System.out.println("Increased salary of intern employee after hike: ");
	o2.DisplaySalary();
	}
}