#include<iostream>
using namespace std;

class Employee {
    private:
    int salary;   //private attribute

    public:
    void setSalary(int s) {   //setter
        salary = s;
    }

    int getSalary() {
        return salary;   //getter
    }
};

int main() {
    int s;
    Employee e1; //object of class Employee
    cout << "Enter salary: ";
    cin >> s;
    e1.setSalary(s); //setter function call
    cout << "Your salary is: " << e1.getSalary();
    return 0;
}