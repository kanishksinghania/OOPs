#include<iostream>
#include<string.h>
using namespace std;

class Employee{

	protected: 
	int eId;//eId=Employee id
	string eName;//eName=Employee Name
	
	public:
	Employee(){
		eId=12345678;
		eName="DefaultName";
	}
	Employee(int id, string name){
		id=eId;
		name=eName;
	}	
	virtual void accept() {
		cout<<"Enter Employee ID: ";
		cin>>eId;
		cout<<"Enter the name of the Employee: ";
		cin>>eName;
	}	
	virtual void display() {
		cout<<"The name of the employee is:"<<eName<<endl;
		cout<<"Employee ID is:"<<eId<<endl;
	}	
	virtual void earnings()=0;
	
  
};

class SalariedEmployee:public Employee {

	private:
		double weeklysalary;
	public:
		SalariedEmployee(){
		weeklysalary=0;
		}
		SalariedEmployee(int id,string name,double ws):Employee(id, name){
		ws=weeklysalary;
		}
		void accept() {
			Employee::accept();
			cout<<"Enter weekly salary of employee: ";
			cin>>weeklysalary;
			}
			
		void earnings() {
			Employee::display();
			cout<<"Weekly Salary is: "<<weeklysalary<<endl;
			}
};

class HourlyEmployee:public Employee {
	private:
		double wage,Hours,HourlySalary;
	public:
		HourlyEmployee(){
		wage=0;
		Hours=0;
		HourlySalary=0;
		}
		HourlyEmployee(int id,string name,double w,double hrs,double hs):Employee(id,name){
			w=wage;
			hrs=Hours;
			hs=HourlySalary;
		}
		void accept() {
			Employee::accept();
			cout<<"Enter wage of the employee: ";
			cin>>wage;
			cout<<"Enter working hours of the employee: ";
			cin>>Hours;
		}
		void earnings() {
			if(Hours<40) {
				HourlySalary=Hours*wage;
				}
			else {
				HourlySalary=(40*wage)+((Hours-40)*wage)*1.5;
				}
			Employee::display();
			cout<<"The hourly salary is: "<<HourlySalary<<endl;
			
		}
		
};	

class CommissionEmployee:public Employee {
	private: 
		double grossSales,commissionRate,CommissionSalary;
	public:
		CommissionEmployee() {
			grossSales=0;
			commissionRate=0;
			CommissionSalary=0;
		}
		CommissionEmployee(int id,string name,double gs,double cr,double cs):Employee(id,name) {
			gs=grossSales;
			cr=commissionRate;
			cs=CommissionSalary;
			}
			
		void accept() {
			Employee::accept();
			cout<<"Enter the Gross Sales: ";
			cin>>grossSales;
			cout<<"Enter the Commission Rate: ";
			cin>>commissionRate;
			}
		void earnings() {
			CommissionSalary=grossSales*commissionRate;
			Employee::display();
			cout<<"The Commission Salary is: "<<CommissionSalary<<endl;
			}
		};
			
			
int main() {

	SalariedEmployee e1;
	e1.accept();
	e1.earnings();
	HourlyEmployee e2;
	e2.accept();
	e2.earnings();
	CommissionEmployee e3;
	e3.accept();
	e3.earnings();
	return 0;
}