// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;
        
         // friend function declaration
         friend int add(ClassA, ClassB);
        
    public:
    	void set_value(){
    		numA = 12;
		}
};

class ClassB {

    
    private:
        int numB;
 
        // friend function declaration
        friend int add(ClassA, ClassB);
        
    public:
    	void set_value(){
    		numB = 10;
		}
};


// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    objectA.set_value();
    objectB.set_value();
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
