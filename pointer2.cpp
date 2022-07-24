#include<iostream>
using namespace std;
int main()
{
    int var{30};

    // Declare and Initialize a pointer
    int *ptr{&var};

    cout << ptr << endl;

    cout << *ptr << endl;

}
