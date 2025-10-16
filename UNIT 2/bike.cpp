 #include<iostream>
using namespace std;
class bike {
	private:
		string brand;
		float price;
	public:
			bike(string b,float p){			
			brand = b;
			price = p;
			}

			bike(const bike &b){
				brand= b.brand;
				price= b.price;
			}
			void display (){
				cout<< "Brand: "<< brand<< endl;
				cout<< "Price: "<< price<< endl;
			}
};
		int main (){
			bike b1("BMW", 1500000.50);
			bike b2=b1;
			cout<<"Bike\details: "<<endl;
			b2.display ();
			return 0;
		}
            
					

