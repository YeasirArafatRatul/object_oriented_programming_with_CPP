// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;
        
         // friend function declaration
         friend void swap(ClassA, ClassB);
        
    public:
    	void set_value(){
    		numA = 12;
		}
		
		void show_value(){
			cout << "Value of numA: " << numA << endl;
		}
};

class ClassB {

    
    private:
        int numB;
 
        // friend function declaration
        friend void swap(ClassA, ClassB);
        
    public:
    	void set_value(){
    		numB = 10;
		}
		
		void show_value(){
			cout << "Value of numA: " << numB << endl;
		}
};


// access members of both classes
void swap(ClassA objectA, ClassB objectB) {
	int temp;
	temp = objectA.numA;

	objectA.numA = objectB.numB;
	objectB.numB = temp;
	
	cout <<"After Swapping numA of objectA is: " << objectA.numA << endl;
	cout <<"After Swapping numB of objectB is: " << objectB.numB << endl;
 
}

int main() {
    ClassA objectA;
    ClassB objectB;
    objectA.set_value();
    objectB.set_value();
    
    // swap two values
    swap(objectA, objectB);
    
    return 0;
}
