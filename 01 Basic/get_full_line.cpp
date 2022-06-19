#include<iostream>
using namespace std;

int main()
{
    string full_name;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;

    return 0;
}