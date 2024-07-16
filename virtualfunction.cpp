#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    ptr = &dog;
    ptr->makeSound();  // Outputs: "Dog barks"

    // Pointing to Cat object
    ptr = &cat;
    ptr->makeSound();  // Outputs: "Cat meows"

    return 0;
}

