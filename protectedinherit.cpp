#include<iostream>
using namespace std;

class Base {
    private:
    int pvt = 1;

    protected:
    int prot = 2;

    public:
    int pub = 3;

    int getPVT() {
        return pvt;
    }
};

class ProtectedDerived : protected Base {
    public:
    int getProt() {
        return prot;
    }

    int getPub() {
        return pub;
    }
};

int main() {
    ProtectedDerived ob1;
    cout << "Private cannot be accesed with protected" << endl;
    cout << "Protected = " << ob1.getProt() << endl;
    cout << "Public = " << ob1.getPub() << endl;
    return 0;
}