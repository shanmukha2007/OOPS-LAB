#include <iostream>
using namespace std;

class Employee {
	int id;
	float salary;
	public:
		void input(){
			cout<<"Enter Employee ID";
			cin>>id>>salary;
		}
		void display(){
			cout<<"Employee ID"<<id<<"Salary:"<<salary<<endl;
		}
};
int main(){
	Employee emp[3];
	for(int i=0; i<3;i++){
		cout<<"Employee Details of Employee"<<i+1<<endl;
		emp[i].input();
	}
	cout<<"Employee Details"<<endl;
	for(int i=0;i<3;i++){
		emp[i].display();
	}
	return 0;
	}

