#include <iostream>

using namespace std;

class code
{
    int id;
public:
    code(){}
    code(int a)
    {
        id = a;
    }

    code(code &obj)
    {
        id = obj.id + 1;
    }

    void display(void)
    {
        cout << id;
    }
};

int main()
{
    code A(100);
    code B(A);
    code C = B; // Copy Constructor Called Again


    cout << "\n Id of A: "; A.display();
    cout << "\n Id of B: "; B.display();
    cout << "\n Id of C: "; C.display();

    return 0;
}
