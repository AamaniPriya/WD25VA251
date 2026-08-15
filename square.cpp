#include<iostream>
using namespace std;
void square(int x,int *y){
*y=x*x;
	
}
int main(){
	int num1,num2;
	cout<<"Enter num1: ";
	cin>>num1;
	
	square(num1,&num2);
	cout<<num2;
	return 0;
}
