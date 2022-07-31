#include <iostream>
using namespace std;


class MyClass
{
    int x, y;
    public:
        MyClass(int, int); // Constructor Declared

        void show_values(){
            cout << "Value of x: " << x << endl << "Value of y: " << y << endl;
        }
    };


MyClass :: MyClass(int a, int b){   // Constructor Defined
    x = a;
    y = b;
}

int main()
{
    MyClass myObj(5,6); // implicit call

    myObj.show_values();

    MyClass myObj2 = MyClass(10, 20); // Explicit Call
    myObj2.show_values();

    return 0;
}

