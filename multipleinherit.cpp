#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

// Base class 2
class Pet {
public:
    void play() {
        cout << "Pet plays." << endl;
    }
};

// Derived class inherits from Animal and Pet
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;

    // Access methods from base classes
    myDog.eat();   // Access from Animal
    myDog.play();  // Access from Pet
    myDog.bark();  // Access from Dog

    return 0;
}
