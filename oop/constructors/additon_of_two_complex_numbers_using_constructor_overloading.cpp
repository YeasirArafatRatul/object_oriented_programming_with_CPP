#include<iostream>
using namespace std;

class complexno
{
    int real,imag;
    public:
    complexno()
    {
        real=0;
        imag=0;
    }
    complexno(int i)
    {
        real=i;
        imag=i;
    }
    complexno(int a,int b)
    {
        real=a;
        imag=b;
    }
    void add(complexno c1, complexno c2)
    {
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};

int main()
{
    cout<<"\n\n Program to perform addition of two complex numbers using constructor overloading";
    cout<<"\n ^^^^^^^ ^^ ^^^^^^^ ^^^^^^^^ ^^ ^^^ ^^^^^^^ ^^^^^^^ ^^^^^ ^^^^^^^^^^^ ^^^^^^^^^^^";
    int real,imag;

    cout<<"\n Enter a single value for real and imaginary parts of first complex number : ";
    cin>>real;
    complexno c1(real);

    cout<<"\n First complex number is given by - ";
    c1.display();

    cout<<"\n\n Enter different values for real and imaginary parts of second complex number : ";
    cin>>real>>imag;
    complexno c2(real,imag);

    cout<<"\n Second complex number is given by - ";
    c2.display();

    complexno c3;
    cout<<"\n\n Initially third complex number is - ";
    c3.display();

    cout<<"\n\n Storing the result of addition of first and second complex number into third...";
    c3.add(c1,c2);

    cout<<"\n\n Now third complex number is given by - ";
    c3.display();

    cout<<"\n";

    return 0;
}
