#include<iostream>
#include<string>

using namespace std;

class Employee // class Employee
{
    public:
        int id;
        string name;
    


};

int main(){
    Employee emp1; // create an object of class Employee
    emp1.id = 1;
    emp1.name = "Arafat Ratul";

    cout << "Employee id: " << emp1.id << endl;
    cout << "Employee name: " << emp1.name << endl;
}