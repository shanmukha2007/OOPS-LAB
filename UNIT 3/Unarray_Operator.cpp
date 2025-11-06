#include <iostream>
using namespace std;

class Ticket_Counter {
    int count;

public:
    Ticket_Counter() : count(0) {}  // constructor initializes count to 0

    // Overload prefix ++ operator
    void operator++() {
        ++count;
    }

    void display() {
        cout << "Tickets issued: " << count << endl;
    }
};

int main() {
    Ticket_Counter counter;

    cout << "Initial count:\n";
    counter.display();

    ++counter;
    ++counter;

    cout << "After two customers:\n";
    counter.display();

    return 0;
}

