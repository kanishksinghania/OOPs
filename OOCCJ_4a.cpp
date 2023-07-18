#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Hotel{
	private:
	int d=0;
	string cust_name;
	int age;
	int cust_id;
	int income;
	string city;
	string room_type;
	
	public:
	Hotel(){
	cust_name="Kanishk";
	age=56;
	cust_id=6666;
	income=0;
	city="Delhi";
	room_type="duplex";
	
	
		
	}
	Hotel(string cname,int age,int cid,int i,string citi,string roomtype){
		cust_name=cname;
		age=age;
		cust_id=cid;
		income=i;
		city=citi;
		room_type=roomtype;
	
	
	}
	void getData();
	void getAge();
	void getincome();
	void getcity();
	void getroomtype();
	void showdata();

};
void Hotel::getData(){
		cout<<"Enter customer name: ";
		cin>>cust_name;
		cout<<"Enter customer id: ";
		cin>>cust_id;
		
		
	
}
void Hotel::getAge(){
	try{
	cout<<"Enter age: ";
	cin>>age;
	if(age<18 || age>55){
		throw  age;
		}
		else{d++;}
	}
	
	catch(int age){cout<<"Age is is not within the age limit."<<endl;}
	
}
void Hotel::getincome(){
try{
	cout<<"Enter income: ";
	cin>>income;
	if(income<=50000 || income>=1000000){
		throw income;
	}
	else{d++;}
	}
	catch(int income){
	cout<<"Your income is not in the required range."<<endl;
	
	}
}
void Hotel::getcity(){
try{
	cout<<"Enter city: ";
	cin>>city;
	if(city =="Pune" || city=="Mumbai"||city=="Chennai"){
		d++;
	}
	else{throw city;}
	}
	catch(string city){
	cout<<"Wrong city!"<<endl;
	}


}
void Hotel::getroomtype(){
try{
	cout<<"Enter Room_Type: ";
	cin>>room_type;
	if(room_type=="D" || room_type=="S"){
		d++;
	
	}
	else{
        throw room_type;
    }
	
}
catch(string room_type){cout<<"Wrong type!"<<endl;}

}




void Hotel::showdata(){
if(d==4){
	cout<<"Customer_name:"<<cust_name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Customer_id:"<<cust_id<<endl;
	cout<<"Income:"<<income<<endl;
	cout<<"City:"<<city<<endl;
	cout<<"Room_Type:"<<room_type<<endl;
}
else{
cout<<"Wrong data input.";
}
	


}
int main(){
Hotel h;
ofstream file;
file.open("abc.txt",ios::out);
if(!file){cout<<"Error in creating file.."<<endl;
return 0;}

cout<<"\nFile Created successfully"<<endl;

h.getData();
h.getAge();
h.getincome();
h.getcity();
h.getroomtype();
file.write((char*)&h,sizeof(h));
file.close();

cout<<"\n file save and closd succesfully."<<endl;

ifstream file1;
file1.open("abc.txt",ios::in);
if(!file1){cout<<"error in opening file..";
return 0;



}
file1.read((char*)&h,sizeof(h));
h.showdata();
file1.close();
return 0;


}