// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;
        
         // friend function declaration
         friend void swap(ClassA &objectA, ClassB &objectB);
        
    public:
    	void set_value(int value){
    		numA = value;
		}
		
		void show_value(){
			cout << "Value of numA: " << numA << endl;
		}
};

class ClassB {

    
    private:
        int numB;
 
        // friend function declaration
        friend void swap(ClassA &objectA, ClassB &objectB);
        
    public:
    	void set_value(int value){
    		numB = value;
		}
		
		void show_value(){
			cout << "Value of numA: " << numB << endl;
		}
};


// access members of both classes
void swap(ClassA &objectA, ClassB &objectB) {
	int temp;
	temp = objectA.numA;

	objectA.numA = objectB.numB;
	objectB.numB = temp;
}

int main() {
    ClassA objectA;
    ClassB objectB;
    objectA.set_value(20);
    objectB.set_value(30);
    
    // swap two values
    swap(objectA, objectB);
    
    objectA.show_value();
    objectB.show_value();
    
    return 0;
}
