#include<iostream>
#include<string.h>
using namespace std;

class complex{
	protected:
		float real,imaginary;
	public:
		complex() {
			real=0;
			imaginary=0;
		}
	void getcomplex() {
		cout<<"Enter the real part: ";
		cin>>real;
		cout<<"Enter the imaginary part: ";
		cin>>imaginary;
		}
		
	void printcomplex() {
		cout<<"The complex number is: "<<real<<"+ ("<<imaginary<<"i)"<<endl;
		}
	complex operator +(complex c){
		complex number;
		number.real = real + c.real;
		number.imaginary= imaginary + c.imaginary;
		return number;
	}
	
	complex operator -(complex c){
		complex number;
		number.real = real - c.real;
		number.imaginary= imaginary - c.imaginary;
		return number;
	}
	
	complex operator *(complex c){
		complex number;
		number.real = (real*c.real)-(imaginary*c.imaginary);
		number.imaginary= (real*c.imaginary) + (imaginary*c.real);
		return number;
	}
	
	complex operator /(complex c){
		complex number;
		number.real = ((real*c.real) + (imaginary*(c.imaginary)))/(c.real*c.real+c.imaginary*c.imaginary);
		number.imaginary= ((real*-c.imaginary)+(imaginary*c.real))/(c.real*c.real+c.imaginary*c.imaginary);
		return number;
	}
};
	
int main(){
  complex c1,c2,c3;
  int a,e=1;
  
while(e==1) {
	cout<<"What do you want to perform- 1:+,2:-,3:*,4:/,5:Exit ";
      cin>>a;
      
      
    switch(a) {
  case 1:
  	  c1.getcomplex();
	c1.printcomplex();
	c2.getcomplex();
	c2.printcomplex();
        c3=c1+c2;
        c3.printcomplex();
        break;
  case 2:
  c1.getcomplex();
	c1.printcomplex();
	c2.getcomplex();
	c2.printcomplex();
        c3=c1-c2;
        c3.printcomplex();
        break;
  case 3:
  c1.getcomplex();
	c1.printcomplex();
	c2.getcomplex();
	c2.printcomplex();
        c3=c1*c2;
        c3.printcomplex();
        break;
  case 4:
  c1.getcomplex();
	c1.printcomplex();
	c2.getcomplex();
	c2.printcomplex();
        c3=c1/c2;
        c3.printcomplex();
        break;
  case 5:
        cout<<"You chose to exit the progam."<<endl;    
        e=0;
        break;
  default:
  	  cout<<"Wrong option";	
  	  break;
  	  }
  	}
}
