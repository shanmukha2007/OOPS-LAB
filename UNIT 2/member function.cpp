#include<iostream>
using namespace std;
class calculator{
	public:
	int add(int a, int b){
		return a+b;
	}	
	float add(float a, float b){
		return a+b;
	}
	int add(int a,int b,int c){
		return a+b+c;
	}	
};
int main(){
	calculator c;
	cout<< "Sum of 2 and 3: "<< c.add(2,3)<<endl;
	cout<< "Sum of 2.5 and 3.5: "<< c.add(2.5f,3.5f)<<endl;
	cout<< "Sum of 1,2,3: "<< c.add(1,2,3)<<endl;
	return 0;
}
