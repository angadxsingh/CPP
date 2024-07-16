#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class MyClass{     //the class
    public:        //Access specifier
    int a;         //attribute
    string b;      //attribute
};

int main() {
    MyClass obj; //object of the class
    obj.a = 10; //accessing the attribute
    obj.b = "Hello"; //accessing the attribute

cout << obj.a << "\n";
cout << obj.b;
return 0;

}