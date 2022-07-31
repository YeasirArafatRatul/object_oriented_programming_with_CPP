#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Account
{
    char name[20];
    int ano;
    char atype[20];
    float balance;

public:

    void get(int no,char *n,char *t,float b);
    float deposit();
    float withdrw();
    void disp();

    void show_balance()
    {
         cout<<"Balance: "<< balance << endl;
    }

};

void Account :: get(int no,char *n,char *t,float b)
    {
        strcpy(name,n);
        ano=no;
        strcpy(atype,t);
        balance=b;
    }
float Account :: deposit()
    {
        float amt;
        cout <<"\nEnter Deposit amount: ";
        cin >> amt;
        balance = balance + amt;
        return balance;
    }
float Account :: withdrw()
    {
        float amt;
        cout << "\nWithdrawal Ammount: ";
        cin >> amt;
        balance = balance-amt;
        return balance;
    }
void Account :: disp()
    {
        cout<<"\n\nAccount number: "<< ano;
        cout<<"\n\nName: " <<name;
        cout<<"\n\nAccount type: "<< atype << endl;
        deposit();
        withdrw();
    }


int main()
{
    int n;
    char nm[20],t[20];
    float a;
    Account bk;

    system("cls");

    cout << "\nEnter Account no.: ";
    cin >> n;
    cout << "\nEnter Name: ";
    cin >> nm;
    cout << "\nEnter account type: ";
    cin >> t;
    cout << "\nEnter balance amount: ";
    cin >> a;

    bk.get(n,nm,t,a);
    bk.disp();

    bk.show_balance();

    return 0;
}
