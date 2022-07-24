#include <iostream>
using namespace std;

class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }

    void getcount(void)
    {
        cout << "Count: " << count << endl;
    }
};

int item :: count;

int main()
{
    item a, b, c;

    a.getdata(5);
    a.getcount();

    b.getdata(6);
    b.getcount();

    c.getdata(7);
    c.getcount();

    return 0;
}
