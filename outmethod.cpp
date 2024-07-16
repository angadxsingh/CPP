#include<iostream>
using namespace std;

class outside{
    public:
    void Method1();
};

void outside::Method1() {
    cout << "Hello World!";
};

int main() {
    outside obj1; 
    obj1.Method1();
    return 0;
}