#include<iostream>
using namespace std;

class Class {
    public: //public access specifier
    int a; //data member
    private:
    int b; //data member
};

int main() {
    Class obj; //object of class Class
    obj.a = 10; //accessing public data member
    //obj.b = 5;  //cannot be called as private
    cout << obj.a << endl; //accessing public data member
}