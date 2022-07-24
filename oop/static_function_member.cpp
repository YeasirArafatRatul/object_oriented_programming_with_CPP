#include <iostream>
using namespace std;

class Note
{
    static int num;       // declare a static data member
    public:
        static int func()
        {
            return num;  // create static member function  
        }
};
// initialize the static data member using the class name and the scope resolution operator  
int Note :: num = 5;

int main()
{
    cout << "The Value of Number: " << Note:: func() << endl;
    return 0;
}
