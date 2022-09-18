#include<iostream>
using namespace std;
void area(int a)
{
    int square=a*a;
    cout<<"The Area Of Square Value is:"<<square<<endl;
}
void area(int l,int b)
{
    int rectangle=l*b;
    cout<<"The Area Of The Rectangle Value is:"<<rectangle<<endl;
}
void area(float r)
{
    float circle=2.34*r*r;
    cout<<"The Area of The Circle Value is:"<<circle<<endl;
}
void area (float le,float br)
{
    float triangle=0.4*le*br;
    cout<<"The Area Of the triangle value is:"<<triangle<<endl;
}
int main()
{
    int a,b,l;
    float r,le,br;
    cout<<"___________"<<endl;
    cout<<"AREA OF SHAPES USING FUNCTION OVERLOADING"<<endl;
    cout<<"___"<<endl;
    cout<<"Enter one value for Square:";
    cin>>a;
    cout<<endl;
    cout<<"Enter two value for Rectangle:";
    cin>>b>>l;
    cout<<endl;
    cout<<"Enter one value for Circle:";
    cin>>r;
    cout<<endl;
    cout<<"Enter two values for triangle:";
    cin>>le>>br;
    cout<<endl;
    cout<<"____"<<endl;
    area(a);
    area(l,b);
    area(r);
    area(le,br);
    cout<<"_____"<<endl;
    return 0;
}
