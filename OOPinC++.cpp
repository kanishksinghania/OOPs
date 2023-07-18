#include<iostream>
using namespace std;

class student{

    private:
    string name;

    public: 
    int age;
    char gender; 

    void setname(string s){
        s=name;
    }

    void getdata(string s, int a, int g){
       s=name;
       a=age;
       g=gender;
    }
    
    void printdata(string s,int a,char g){
        cout<<s<<endl<<a<<endl<<g<<endl;
    }


};

int main() {
    // student a;
    // a.name="Kanishk";
    // a.age=19;
    // a.gender='M';
    // cout<<a.name<<endl<<a.age<<endl<<a.gender<<endl;

    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    student arr[n];
    string b;
    int a;
    char c;
    for(int i=0;i<n;i++) {
        cout<<"Enter Name: ";
        cin>>b;
        arr[i].setname(b);
        cout<<"Enter age: ";
        cin>>a;
        cout<<"Enter gender: ";
        cin>>c;
    }
    for(int i=0;i<n;i++) {
        arr[i].printdata(b,a,c);
    }
}
