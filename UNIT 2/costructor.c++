#include<iostream>
#include<string>
using namespace std;

class students {
private:
    string name;
    int rollno;
    float marks;

public:
    // Constructor
    students(string n, int r, float m) {
        name = n;
        rollno = r;
        marks = m;
        cout << "Student record created for " << name << endl;
    }

    // Display student details
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~students() {
        cout << "Record of student " << name << " is deleted.\n";
    }
};

int main() {
    // Constructor is called when object is created
    students s1("Devratha", 101, 88.5);
    students s2("Varadha", 702, 92.0);

    s1.display();
    s2.display();

    return 0;
}

