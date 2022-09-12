#include<iostream>

using namespace std;


class dynamic
{
const char* p;
public:
    // default constructor
    dynamic()
    {
        // allocating memory at run time
        p = new char[6];
        p = "Hello";
    }

    void display()
    {
        cout << p << endl;
    }
};

int main()
{

    dynamic dy;
    dy.display();

}
