
#include <iostream.h>
#include <conio.h>


class Animal
{
public:
    void eat()
    {
	cout << "Animal is eating." << endl;
    }

    void sleep() {
	cout << "Animal is sleeping." << endl;
    }
};


class Dog : public Animal
{
public:
    void bark()
     {
	cout << "Dog is barking." << endl;
    }
};

void main() {
    Dog obj;
    clrscr();
    obj.eat();
    obj.sleep(); 
    obj.bark();  

    getch();
}
