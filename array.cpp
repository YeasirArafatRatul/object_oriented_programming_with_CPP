#include<iostream>
using namespace std;

int main()
{
    int arr[5] {2,5,6,2,7};

    // write data in array
    for(size_t i {0}; i < 5; i++)
        {
            cin >> arr[i];
        }


    // read data from array
    for(size_t i {0}; i < 5; i++)
        {
            cout << "array[" << i << "] = " << arr[i] << endl;
        }

    // looping using old range based for loop

    for (auto element : arr){
            cout << element << endl;

    }

    return 0;
}
