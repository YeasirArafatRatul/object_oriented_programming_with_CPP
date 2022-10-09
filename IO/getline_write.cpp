#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int size = 20;
    char name[20];

    /*
    cout << "Enter You Name: ";
    cin >> name; // can take one word.
    cout << "\n" << name;


    cout << "\nEnter You Name Again: " << "\n";
    cin.getline(name, size);
    cout << "\n" << name;

*/
    cout << "\nEnter You Name Again: ";
    cin.getline(name, size);
    cout << "\n" << name << "\n";

    int i;

    for(i = 1; i <= strlen(name); i++)
    {
        cout.write(name, i);
        cout << "\n";
    }

    return 0;
}
