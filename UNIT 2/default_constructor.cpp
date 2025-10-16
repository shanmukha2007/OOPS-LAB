#include <iostream>
using namespace std;

class student {
    string name;
    int age;
public:
    
    student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called" << endl;
    }

    student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }

   
    student(const student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for " << name << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int main() {
    student s1;              
    student s2("Alice", 20);  
    student s3(s2);           

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

