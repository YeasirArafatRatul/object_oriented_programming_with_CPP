#include<iostream>

using namespace std;

int main()
{
    int *array[10];

    int a = 5, b = 10, c = 50;

    array[0] = &a;
    array[1] = &b;
    array[2] = &c;

    cout << &array[0] << endl;
    cout << array << endl;

    cout << array[0] << endl;
    cout << *array << endl;

    cout << *array[0] << endl;
    cout << *(array[0 + 1]) << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << &array[i] << endl;
    }


    return 0;
}
