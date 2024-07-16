#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z);
};

Car::Car(string x , string y, int z){
    brand = x;
    model = y;
    year = z;
}

int main(){
    Car car1("Toyota","Corolla",2018);
    Car car2("Honda","Civic",2017);
  
    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    
    return 0;
};