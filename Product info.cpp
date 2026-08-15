#include<iostream>
using namespace std;
class product_info{
	public:
		string name;
		string expiary_d;
		string manufact_d;
		int price;
		int id;
	void input(){
		cout<<"Enter product name: ";
		cin>>name;
		cout<<endl;
		cout<<"Enter product Manufacturing date: ";
		cin>>manufact_d;
		cout<<endl;
		cout<<"Enter product Expiary date: ";
		cin>>expiary_d;
		cout<<endl;
		cout<<"Enter product Id: ";
		cin>>id;
		cout<<endl;
		cout<<"Enter product price: ";
		cin>>price;
		cout<<endl;
	}
	void display(){
		cout<<"Product Name: "<<name<<endl;
		cout<<"Product Manufacturing date: "<<manufact_d<<endl;
		cout<<"Product Expiary date: "<<expiary_d<<endl;
		cout<<"Product Id: "<<id<<endl;
		cout<<"Product Price: "<<price<<endl;
	}
};
