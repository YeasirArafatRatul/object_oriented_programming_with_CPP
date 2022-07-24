#include<iostream>
using namespace std;
int main()
{
    int *null_ptr{}; // will initialize as nullptr

    // Declaring explicitly
    int *ptr{nullptr};

    cout << ptr << endl;

    cout << *ptr << endl;

    return 0;

}

