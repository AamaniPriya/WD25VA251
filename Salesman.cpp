#include<iostream>
#include<string>
using namespace std;
class Salesman_Info{
	public:
	string name;
	int id;
	string post;
	int contact;
	int salary;
			int final_salary;
	void input(){
		cout<<"Enter your name: ";
		cin>>name;
		cout<<endl;
			cout<<"Enter your ID: ";
			cin>>id;
			cout<<endl;
			cout<<"Enter your Post: ";
			cin>>post;
			cout<<endl;
			cout<<"Enter your Contact: ";
			cin>>contact;
			cout<<endl;
			cout<<"Enter your Salary: ";
			cin>>salary;
			cout<<endl;
			
	}
	void output(){
		cout<<"Salesman Details: "<<endl;
		cout<<"Your Name: "<<name<<endl;
		cout<<"Your id: "<<id<<endl;
		cout<<"Your Post: "<<post<<endl;
		cout<<"Your contact: "<<contact<<endl;
		cout<<"Your Salary: "<<final_salary;
	}
	void incentive(){
		int sales;
		int incentprice;
		cout<<"Enter your sales: ";
		cin>>sales;
		int price;
		cout<<"Enter price: ";
		cin>>price;
		
		if (sales>=0 && sales<=10){
			cout<<"No incentives will be given. "<<endl;
			final_salary=salary;}
		else if(sales>=11 && sales<=20){
			incentprice=(sales-10)*price;
			final_salary=salary+incentprice*0.05;
		}
		else if(sales>=21 && sales<=30){
			incentprice=(sales-10)*price;
			final_salary=salary+incentprice*0.075;}
			else if(sales>=31 && sales<=50){
			incentprice=(sales-10)*price;
			final_salary=salary+incentprice*0.10;}
			else {
			incentprice=(sales-10)*price;
			final_salary=salary+incentprice*0.15;;
		}
		
	}
};
int main(){
	Salesman_Info a;
	a.input();
	a.incentive();
	
	a.output();
	return 0;
}
