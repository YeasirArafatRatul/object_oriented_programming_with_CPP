#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA = 15;

        // friend class declaration
        friend class ClassB;
};

class ClassB {
        int numB = 10;
    public:
    // member function to add numA
    // from ClassA and numB from ClassB
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}
