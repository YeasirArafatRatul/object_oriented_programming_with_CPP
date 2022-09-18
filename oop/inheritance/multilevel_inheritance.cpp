#include <iostream>
using namespace std;

class students //single base class
{
 	public:
 	char institute_name[5] = "DIIT";

};
class cse : public students // derived class from base class
{
 	public:
 	char dept[4] = "CSE";

};
class batch_20 : public cse   // derived from class derive1
{
 	private:
 	int batch = 20;

 	public:
        void show_batch(){
        cout << "Batch: " << batch << endl;
        }

};
int main()
{
     batch_20 student1;      //object of derived class
     cout << student1.institute_name << endl;
     cout << student1.dept << endl;
     student1.show_batch();

     return 0;
}              	//end of program
