#include<iostream>
using namespace std;

class Parent
{
public:
	virtual void function()
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
    Parent *mother, father;
    Child first_born;
    mother = &first_born;

    father.function();
    mother -> function();

return 0;
}
