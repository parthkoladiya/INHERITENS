#include<iostream.h>
#include<conio.h>
#include<string.h>


class Vehicle {
protected:
    char company[50];
    char owner[50];

public:
    void getVehicleData() {
	cout << "Enter Vehicle Company: ";
	cin>>(company, 50);
	cout << "Enter Vehicle Owner: ";
	cin>>(owner, 50);
	}

    void displayVehicleData() {
	cout << "Vehicle Company: " << company;
	cout << "Vehicle Owner: " << owner;
    }
};


class Car : public Vehicle {
private:
    char model[50];
    float price;
    int madeYear;
    char dualAirbags[10];
    char color[20];

public:
    void getCarData()
     {
	getVehicleData();
	cout << "Enter Car Model: ";
	cin>> (model, 50);
	cout << "Enter Car Price: ";
	cin >> price;
	cout << "Enter Car Made Year: ";
	cin >> madeYear;
	cout << "Does the Car have Dual Airbags? (yes/no): ";
	cin>>(dualAirbags, 10);
	cout << "Enter Car Color: ";
	cin>>(color, 20);
    }

    void displayCarData() {
	displayVehicleData();
	cout << "Car Model: " << model;
	cout << "Car Price: " << price;
	cout << "Car Made Year: " << madeYear;
	cout << "Car has Dual Airbags: " << dualAirbags;
	cout << "Car Color: " << color;
    }
};

void main() {
    clrscr();


      Car obj;


    obj.getCarData();


    cout << "\nCar Details:\n";
    obj.displayCarData();

    getch();
}
