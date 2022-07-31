// Program to illustrate friend function

#include<iostream>
using namespace std;

class numbers {
             int a, b;
public:
void set_value() {
a=50;
b=30;
}

friend float mean(numbers obj); //declaration of friend function
};

float mean(numbers obj) {
             return int(obj.a + obj.b)/2.0; //friend function definition
}


int main() {
numbers object;
object.set_value();

cout<< "Mean value:" <<mean(object);
return 0;
}
