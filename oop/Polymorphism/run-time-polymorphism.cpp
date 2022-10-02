#include<iostream>
using namespace std;

class Parent
{
public:
	void function()
	{
	cout << "Hello from Parent" << endl;
	}
};

class  Child: public Parent
{
public:
	void function()
	{
	cout << "Hello from Child" << endl;
	}
};

int main()
{
    Child first_born;

    first_born.function();

return 0;
}

