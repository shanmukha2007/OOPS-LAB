#include<iostream>
using namespace std;
class car{
	private:
		string brand;
		int price;
	public:
	car() {	
		brand="unknown";
		price=0;
		cout<< "Default constructor called car object created"<< endl;
	}
void display () {
	cout<< "Brand"<<brand<<endl<<"Price"<<price<<endl;
}
~car(){
	cout<< "Destructor called car object destroyed"<< endl;
}
};
int main(){
	car c1;
	c1.display();
	return 0;
}
	
		
