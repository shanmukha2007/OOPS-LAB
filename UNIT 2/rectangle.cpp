#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length , width ;
	public:
	Rectangle(int l,int w){
		length=l;
		width=w;
		cout<<"paramatized constructor called Rectangle object created"<< endl;
	}
	void area(){
		cout<< "Area="<<(length*width)<<endl;
	}
	~Rectangle () {
		cout<<"Destructor called Rectangle object destroyed"<<endl;
	}
};
int main(){
	Rectangle r1(10,5);
	r1.area ();
		return 0;
}

