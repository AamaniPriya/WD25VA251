#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		string name;
		int id;
		string department;
		float NS;
		float BS;
		float DA;
		float HRA;
		float GS;
		float PF;
		
		void input(){
			cout<<"Enter your Name: ";
			cin>>name;
			cout<<endl;
			cout<<"Enter your ID: ";
			cin>>id;
			cout<<endl;
			cout<<"Enter your Department: ";
			cin>>department;
			cout<<endl;
			cout<<"Enter your salary:";
			cin>>BS;
		}

void Name( ){
	cout<<"Name= "<<name<<endl;
}
void Id(){
	cout<<"Id= "<<id<<endl;
}
void Dep(){
	cout<<"Department= "<<department<<endl;
}
void NET_Salary() {
    if(BS >= 5000 && BS <= 10000){
        DA = BS * 2.5 / 100;
        HRA = BS * 2 / 100;
    }
    else if(BS <= 25000){
        DA = BS * 3.5 / 100;
        HRA = BS * 3 / 100;
    }
    else if(BS >= 50000){
        DA = BS * 5 / 100;
        HRA = BS * 4.5 / 100;
    }
    else{
        cout << "Invalid Salary";
        return;
    }

    GS = BS + DA + HRA;

    if(GS < 20000)
        PF = 0;
    else if(GS <= 50000)
        PF = 1250;
    else
        PF = 3650;

    NS = GS - PF;

    cout << "Net Salary = " << NS << endl;
}
};
int main(){
	Employee s;
	s.input();
	s.Name();
	s.Id();
	s.Dep();
	s.NET_Salary();
	return 0;
}
