#include <iostream>
#include <string>
using namespace std;

// Declaration of the Car class
class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y) : brand(b), year(y) {}

    // Declaration of friend function
    friend void showDetails(Car &c);
};

// Definition of the friend function
void showDetails(Car &c) {
    cout << "Brand: " << c.brand << endl;
    cout << "Year: " << c.year << endl;
}

int main() {
    // Create a Car object
    Car myCar("Toyota", 2022);

    // Call the friend function to display details
    cout << "Car details:" << endl;
    showDetails(myCar);

    return 0;
}
