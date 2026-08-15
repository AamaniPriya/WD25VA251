#include <iostream>
using namespace std;

int main(){
	int numbers[]={10,20,30,40,50};
	cout<<"The elements of the collection using range based for loop: ";
	cout<<endl;
	for (int value:numbers){
		cout<<value<<" ";
		cout<<endl;	
	}
	cout<<"The elements displayed using auto function are"<<endl;
	auto a=90;
	auto b=17.5;
	auto c='A';
	auto d="Aamani";
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
	cout<<"d= "<<d<<endl;
	return 0;
	
	
}
