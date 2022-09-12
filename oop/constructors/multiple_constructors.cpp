#include <iostream>
using namespace std;


class MyClass
{
    int x, y;
    float z;

    public:
        MyClass();
        MyClass(int, int);
        MyClass(int, int, float);

        void show_values(){
            cout << "Value of x: " << x << endl;
            cout << "Value of y: " << y << endl;
            cout << "Value of z: " << z << endl;
        }
    };


MyClass :: MyClass(){   // Constructor Defined
    x = 0;
    y = 0;
    z = 0.0;
}

MyClass :: MyClass(int a, int b){   // Constructor Defined
    x = a;
    y = b;
}

MyClass :: MyClass(int a, int b, float c){   // Constructor Defined
    x = a;
    y = b;
    z = c;
}
int main()
{

    MyClass myObj; // implicit call
    MyClass myObj2(2,5);
    MyClass myObj3(3,20,4.6);


    myObj.show_values();
    myObj2.show_values();
    myObj3.show_values();



    return 0;
}

