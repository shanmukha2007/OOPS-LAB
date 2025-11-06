#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    void showDimensions() {
        cout << "Length = " << length << ", Breadth = " << breadth << endl;
    }

    friend int calculateArea(Rectangle r);
};

int calculateArea(Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    rect.showDimensions();
    int area = calculateArea(rect);
    cout << "Area = " << area << endl;
    return 0;
}

