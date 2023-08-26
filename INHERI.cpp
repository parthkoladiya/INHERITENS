#include <iostream.h>
#include <conio.h>


class Animal {
public:
    void eat() {
        cout << "Animal is eating.";
    }
};


class Dog : public Animal {
public:
    void bark() 
    {
        cout << "Dog is barking." ;
    }
};

void main() {
    clrscr();

    
    Dog obj;

    
    obj.eat();

    obj.bark();

    getch();
}
