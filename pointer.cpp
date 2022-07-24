#include <iostream>

using namespace std;

int main()
{
	int x, *ptr ;
	x = 8 ;
	ptr = &x ;

    cout << "Value of x: " << x << endl;
    cout << "Value of x using pointer: " << *ptr << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x using pointer: " << ptr << endl;

	return 0;
}

