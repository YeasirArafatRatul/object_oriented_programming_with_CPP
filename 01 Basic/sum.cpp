#include<iostream>

int main()
{
    std::cout << "Enter two numbers:"<<std::endl;
    int num1, num2;
    // std::cin >> num1 >> num2;
    num1 = 23;
    num2 = 45;
    std::cout << "The sum of " << num1 << " and " << num2 
    << " is " << num1 + num2 << std::endl;

    return 0;
}