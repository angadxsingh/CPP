#include<iostream>
using namespace std;

class inside{
    public:
    void Method(){            //method (function defined in a class)
        cout << "Hello World!";
    }
};

int main() {
    inside obj;              //object of class inside
    obj.Method();            //calling method of class inside
    return 0;
}
