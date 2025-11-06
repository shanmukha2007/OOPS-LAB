#include <iostream>
using namespace std;

class Package {
    int id;
    float weight;

public:
    
    Package(int i, float w) : id(i), weight(w) {}

    bool operator==(Package p) {
        return (id == p.id && weight == p.weight);
    }

    bool operator!=(Package p) {
        return !(*this == p);
    }
};

int main() {
    Package p1(101, 5.5), p2(101, 5.5), p3(102, 7.0);

    if (p1 == p2)
        cout << "Package 1 and Package 2 are identical.\n";
    else
        cout << "Package 1 and Package 2 are different.\n";

    if (p1 != p3)
        cout << "Package 1 and Package 3 are different.\n";
    else
        cout << "Package 1 and Package 3 are identical.\n";

    return 0;
}

