#include <iostream>

using namespace std;

int main()
{
    int ar[5], *p = ar, i;

    for(i = 0; i < 5; i++){

        cin >> *(p + i); //taking input using pointer
    }
    cout << endl;
    for(i = 0; i < 5; i++){
        cout << *(p + i) << " "; //showing output using pointer
    }
    cout << endl;
    for(i = 0; i < 5; i++){
        cout << (p + i) << " "; //showing the value of every index of array using pointer
    }
    return 0;
}
