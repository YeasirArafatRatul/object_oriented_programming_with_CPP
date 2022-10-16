#include<iostream>
using namespace std;


template <typename T>
T add(T x, T y)
{
    return (x + y);
}


template <typename T, typename T2>
T2 add_2(T x, T2 y)
{
    cout << "\nI am here" << "\n";
    return (x + y);
}

int main()
{
    cout << "Addition of Integers: " << add<int>(4,23) << endl;
    cout << "Addition of Floats: " << add<float>(4.5, 2.9) << endl;

    cout << "Addition of Integer and Float: " << add_2 <int, float>(4,2.3) << endl;

}
