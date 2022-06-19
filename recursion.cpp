

#include <iostream>

using namespace std;

int loop(int n)
{

    if( n==0 ){
        cout << " "<< endl;
    }
    else{
        cout << "Hello World"<< endl;
        loop(n-1);
    }
}

int main(){
    loop(10);
}
