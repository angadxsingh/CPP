#include<iostream>
using namespace std;

class Person {
    int id;      //private attributes
    string name;
    public:

    void set_p() {    //public function to take input 
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
    }

    void display_p() {   //public function to display input
        cout << endl << "ID: " << id << "\nName: "<< name << endl;
    }
};

class Student : private Person {   //student class inherits private class
    string course;      //specific attributes to student class
    int fee;
    public:

    void set_s() {     //public function to take input
        set_p();       //uses old function parameters also
        cout<<"Enter course: ";
        cin>>course;
        cout<<"Enter fee: ";
        cin>>fee;
    }

    void display_s() {
        display_p();
        cout << "Course: " << course << "\nFee: " << fee << endl;
    }
};

class Teacher : private Person {
    string subject;      //specific attributes to teacher class
    int salary;
    public:
    
    
    void set_t() {     //public function to take input
        set_p();       //uses old function parameters also
        cout<<"Enter subject: ";
        cin>>subject;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    
    void display_t() {
        display_p();
        cout << "Subject: " << subject << "\nSalary: " << salary << endl;
    }
};

int main() {      //defines what is to be done
    char x;
    cout << "Student or Teacher: ";
    cin >> x;
    if (x=='s') {
        Student s;
        s.set_s();
        s.display_s();
    } 
    else if (x=='t') {
        Teacher t;
        t.set_t();
        t.display_t();
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}