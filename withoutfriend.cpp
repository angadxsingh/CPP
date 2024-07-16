#include<iostream>
using namespace std;

class A {
    public:
    int a;    //integer a
};

class B {
    public:
    int b;   //integer b
};

void min(A z ,B x) {     //creates object z and x for class A and B
    if (z.a < x.b) {     //object z selects int a and object z selects int b
        cout << "a is smaller" << endl;  
    }
    else {
        cout << "b is smaller" << endl;
    }
}

int main() {
    A z;      //defining z is an object of A
    B x;
    cout << "Enter value of a: ";
    cin >> z.a;     //input value of a
    cout << "Enter value of b: ";
    cin >> x.b;     //input value of b
    min(z,x);
    return 0;
}