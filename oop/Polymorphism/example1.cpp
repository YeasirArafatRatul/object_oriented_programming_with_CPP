#include<iostream>
#include<string.h>


using namespace std;


class User
{
protected:
        char username[15];
        int id;
        int password;

public:
    // Constructor
    User(char USERNAME[], int ID)
    {
        strcpy(username, USERNAME);
        id = ID;
    }

    void display()
    {
        cout << username << " " << id << endl;
        cout << password << endl;
    }

    // Pure Virtual Function
    virtual void role() = 0;

    bool login(int, int);
    void set_password(int);
};

// Login Function
bool User :: login(int id, int pd)
{
    if(id == id && password == pd){
        return true;
    }
    return false;
}

void User :: set_password(int pd)
{
    password = pd;
}


class Student : public User
{
    // Using The Constructor of Base Class
    using User :: User;

public:
    void role()
    {
        cout << "I am a student" << endl;
        cout << "I attend classes" << endl;
    }


};


class Teacher : public User
{
    // Using The Constructor of Base Class
    using User :: User;

public:
    void role()
    {
        cout << "I am a Teacher" << endl;
        cout << "I conduct classes" << endl;
    }
};

int main()
{
    Student user_one("user_one", 1);
    Teacher user_two("user_two", 2);
    user_one.set_password(1234);
    user_two.set_password(2541);


    int password;
    cin >> password;
    if (user_one.login(1,password)){
       cout<< "User Logged In";
    }
    else
    {
        cout << "Login Failed";
    }

    return 0;
}
