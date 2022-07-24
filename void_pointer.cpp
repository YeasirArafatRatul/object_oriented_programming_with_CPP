#include <iostream>

using namespace std;


int main()
{

    int a = 2;


    void *ptr;

    ptr = &a; // is valid we don’t need to typecast
    cout << ptr << endl;
     //cout << *ptr << endl; // not possible because void pointer can't be dereferenced

    return 0;
}
