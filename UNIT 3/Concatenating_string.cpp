#include <iostream>
#include <string>
using namespace std;

class Message {
    string text;

public:
    Message(string t = "") : text(t) {}
    Message operator+(Message m) {
        return Message(text + m.text);
    }

    void display() {
        cout << text << endl;
    }
};

int main() {
    Message sender("Prabhas: ");
    Message msg("Hello Guy!");

    Message full_msg = sender + msg;

    cout << "Complete message:\n";
    full_msg.display();

    return 0;
}

