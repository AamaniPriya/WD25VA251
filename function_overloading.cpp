#include <iostream>
using namespace std;
//Function overloading.
class Demo
{

public:

	void add(int a , int b)
	{
		cout<<a+b<<endl;
	}
	void add(int a , int b , int c)
	{
		cout<<a+b+c<<endl;
	}
	int add(float a , float b)
	{
		return a+b;
	}
	void display(int x)
	{
		cout<<"Integer : "<<x<<endl;
	}
	void display(double y)
	{
		cout<<"Double : "<<y<<endl;
	}
	void display(int x , int y)
	{
		cout<<"Sum : "<<x+y<<endl;
	}	
};

int main() 
{
	Demo q;
	q.add(2,9);
	q.add(4,5,6);
	
	return 0;
}
