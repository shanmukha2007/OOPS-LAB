#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter any two numbers";
	cin>>a>>b;
	cout<<"Before swapping"<<a<<"\t"<<b;
	c=a;
	a=b;
    b=c;
    cout<<"\n After swapping"<<a<<"\t"<<b;
    return 0;
}

