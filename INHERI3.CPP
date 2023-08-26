#include <iostream.h>
#include <conio.h>


class Vehicle {
public:
    void start() 
    {
        cout << "Vehicle has started." << endl;
    }

    void stop()
     {
        cout << "Vehicle has stopped." << endl;
     }
};


class Car : public Vehicle {
public:
    void accelerate() 
    {
        cout << "Car is accelerating." << endl;
    }

    void brake() 
    {
        cout << "Car is braking." << endl;
    }
};


class SportsCar : public Car {
public:
    void turboCharge()
     {
        cout << "Sports Car is turbocharged!" << endl;
    }
};

void main()
 {
    SportsCar obj;
    clrscr();
    obj.start();
    obj.accelerate();
    obj.turboCharge();
    obj.brake();
    obj.stop();

    getch();
}
