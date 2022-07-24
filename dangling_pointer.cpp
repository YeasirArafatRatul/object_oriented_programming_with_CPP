#include <iostream>

using namespace std;


int main()
{
	int *ptr = (int *)malloc(sizeof(int));
	int a = 5 ;
	ptr = &a ;
	free(ptr);  //now this ptr is known as dangling pointer.

    cout << "After Deallocationg its memory" << *ptr << endl;

  return 0;
}


