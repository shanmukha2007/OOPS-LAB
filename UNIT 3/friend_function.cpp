#include <iostream>
#include <string>
using namespace std;

class Fruit {
private:
    string name;
    float weight;

public:
    void setData(string n, float w) {
        name = n;
        weight = w;
    }

    friend void displayFruit(Fruit f);
};

void displayFruit(Fruit f) {
    cout << "Fruit Name: " << f.name << endl;
    cout << "Weight: " << f.weight << " kg" << endl;
}

int main() {
    Fruit apple;
    apple.setData("Apple", 1.2);
    displayFruit(apple);
    return 0;
}

