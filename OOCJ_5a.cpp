#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using  namespace std;

void addition(vector<int>&a) {
	int n;
	cout<<"Enter the number of elements to be added: ";
	cin>>n;
	int b;
	cout<<"Enter the elements: \n";
	for(int i=0;i<n;i++) {
		cin>>b;
		a.push_back(b);
	}
}

void remove(vector<int>&a) {
	cout<<"Enter the element to be removed: "<<endl;
	int num=0;
	cin>>num;
	vector<int>::iterator it;
   it = find(a.begin(), a.end(), num);
   if (it != a.end()){
   a.erase(it);
   cout<<"Element removed successfully!\n";
   }

   else{
    cout<<"Element not found!\n";
   }

}

void finding(vector<int>&a) {
cout<<"Enter the element to be found: "<<endl;
	int b=0;
	cin>>b;
	vector<int>::iterator it= find(a.begin(),a.end(),b);
	if(it!=a.end()){
		cout<<"Element found at position:"<<it-a.begin()+1<<"!"<<endl;
		}
	else
		cout<<"Element not found!"<<endl;
	}

void sorting(vector<int> &a){
	sort(a.begin(),a.end());
	}

void print(vector<int>&a){
	for(int i=0;i<a.size();i++) {
	cout<<a[i]<<endl;
	cout<<"\n";
	}
}






int main() {
	vector<int>a;
	int ch;
	
	do{
		cout<<"What do you want to perform:"<<endl;
		cout<<"1.Add Item\n2.Remove Item\n3.Find Item\n4.Sort List\n5.Print List\n6.Reverse List\n7.Exit"<<endl;
		cin>>ch;
		switch(ch){
		case 1: 
		addition(a);
		break;
		case 2:
		remove(a);
		break;
		case 3:
		finding(a);
		break;
		case 4:
		sorting(a);
		break;
		case 5:
		print(a);
		break;
		case 6:
		reverse(a.begin(),a.end());
		break;
		case 7:
		cout<<"You chose to exit!";
		break;			
		}
		}while(ch!=7);
	}
