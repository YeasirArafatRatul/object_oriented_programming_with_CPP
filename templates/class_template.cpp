#include<iostream>
using namespace std;


template <class Temp>
class Calculator
{
private:
        Temp n1, n2;

public:
        Calculator(Temp num1, Temp num2)
        {
                n1 = num1;
                n2 = num2;
        }

        void show()
        {
                cout << "Addition is: " << n1 << "+" << n2 << "=" << addition() << endl;
                cout << "Subtraction is: " <<n1 << "-" << n2 << "=" << subtraction() << endl;
                cout << "Product is: " << n1 << "*" << n2 << "=" << multiplication() << endl;
                cout << "Division is: " << n1 << "/" << n2 << "=" << division() << endl;
        }

        Temp addition() { return (n1 + n2); }

        Temp subtraction() { return n1 - n2; }

        Temp multiplication() { return n1 * n2; }

        Temp division() { return n1 / n2; }
};

int main()
{
 Calculator<int> Calc1(25, 12);
        Calculator<float> Calc2(13.6, 5.9);

        cout << "Integer results for 25 and 12:" << endl;
        Calc1.show();

        cout << endl << "Float results for 13.6 and 5.9:" << endl;
        Calc2.show();

        return 0;
}
