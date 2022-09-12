#include<iostream>


using namespace std;

class Car
{
    const int wheels = 4;
    bool start = false;

protected:
    unsigned int speed = 0;

public:
    void engine_start(){
    start = true;
    cout << "Engine Start" << endl;
    }

    void speed_up(){
    speed += 5;
    }

    void push_break(){
        if (speed > 0){
            speed -= 5;
        }
        else
        {
            speed += 5;
        }
    }

    void show_speed(){
    cout << speed << endl;
    }

};

class BMW: public Car{

    public:
      void speed_up(){
            speed += 20;
        }
};

int main(){

    Car car1;
    car1.engine_start();
    car1.speed_up();
    car1.speed_up();
    car1.show_speed();
    car1.push_break();
    car1.show_speed();

    BMW R8;
    R8.engine_start();
    R8.speed_up();
    R8.speed_up();
    R8.show_speed();
    R8.push_break();
    R8.show_speed();
}

