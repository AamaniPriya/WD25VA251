#include<iostream>
using namespace std;
inline int square(int x)//doesnot  get stored in stack as normal function get stored in stack
{
	return x*x;
}
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Square of number is: "<<square(num);
	return 0;
}
