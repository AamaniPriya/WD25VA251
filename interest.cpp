#include <iostream>
using namespace std;

	void interest(float amount,float rate=8.5){
		float si;
		si=(amount*rate)/100;
		cout<<"Simple interest = "<<si<<endl;
	}

int main() 
{
	interest(10000);
	interest(10000,10);
	
	return 0;
}
