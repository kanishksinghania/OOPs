#include<iostream>
#include<string.h>
using namespace std;
class student{

	private:
		int prn;
		int rollno;
		string panel;
		string name;
	public:
		
		void insert(){
			
			cout<<"enter prn";
			cin>>prn;
			cout<<"enter rollno";
			cin>>rollno;
			cout<<"enter panel";
			cin>>panel;
			cout<<"enter name";
			cin>>name;
			
		
		
		}
		void display(){
			cout<<"student details:";
			cout<<"\n name:"<<name;
			cout<<"\n prn:"<<prn;
			cout<<"\n rollno:"<<rollno;
			cout<<"\npanel:"<<panel<<endl;;
		}
		student(){
			prn=1032211295;
			rollno=27;
			panel='H';
			name='K';
		
		}
		student(int p,int r,string pa,string n){
			prn=p;
			rollno=r;
			panel=pa;
			name=n;
			
		
		}
		student(student &c){
			prn=c.prn;
			rollno=c.rollno;
			panel=c.panel;
			name=c.name;
		
		
		
		}
		
		~student(){
		cout<<"Destructor called.\n";
		}
		
};


int main(){
	student a;
	student c(1032211295,27,"H","Kanishk");
	student b(c);
	
	//c.insert();
	a.display();
	c.display();
	b.display();
}