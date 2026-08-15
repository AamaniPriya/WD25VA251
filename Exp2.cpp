#include<iostream>
using namespace std;
void swap(int &p,int &q){
	int r=p;
	p=q;
	q=r;
	
}
int main(){
	int num1,num2;
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<"Enter num2: ";
	cin>>num2;
	cout<<"Before swap:"<<"num1"<<"="<<num1<<" "<<"num2"<<"="<<num2<<endl;
	swap(num1,num2);
	cout<<"After swap:"<<"num1"<<"="<<num1<<" "<<"num2"<<"="<<num2<<endl;
	return 0;
}
