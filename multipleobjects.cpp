#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2018;

    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2017;

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    
    return 0;
};