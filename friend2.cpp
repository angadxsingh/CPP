#include<iostream>
using namespace std;

class B;  //forward declaration to use later

class A {
    int x;
    string z;
    public:
    void setdata(int i, string j)
    {
        x = i;
        z = j;
    }

    friend void min(A,B);
};

class B {
    int y;
    public:
    void setdata(int i)
    {
        y = i;
    }

    friend void min(A,B);
};

void min (A a,B b) {
    if (a.x <= b.y)
    cout << a.x << a.z << endl;

    else
    cout <<b.y << a.z << endl;

}

int main() {
    A a;
    B b;
    a.setdata(10,"hi");
    b.setdata(20);

    min(a,b);
    return 0;
}