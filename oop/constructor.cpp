#include <iostream>
using namespace std;


class MyClass
{
public:
    MyClass(); // Constructor Declared
};


MyClass :: MyClass(){   // Constructor Defined
    cout << "Hello World" << endl;
}

int main()
{
    MyClass myObj; // constructor will be called automatically
    return 0;
}

