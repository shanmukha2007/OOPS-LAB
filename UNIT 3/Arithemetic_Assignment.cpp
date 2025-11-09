#include <iostream>
using namespace std;

class Stock {
    int quantity; 
public:
    Stock(int q = 0) : quantity(q) {}

    void operator+=(int newItems) {
        quantity += newItems;
    }

    void display() {
        cout << "Current stock: " << quantity << endl;
    }
};

int main() {
    Stock warehouse(50);

    cout << "Initial stock:\n";
    warehouse.display();

    warehouse += 20; 

    cout << "After adding items:\n";
    warehouse.display();

    return 0;
}

