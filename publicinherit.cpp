#include<iostream>
using namespace std;

class Base {
    private:
    int pvt = 1;

    protected:
    int prot = 2;

    public:
    int pub = 3;

    int getPVT() {  //function to access private member
        return pvt;
    }
};

class PublicDerived : public Base {
    public:
    int getProt() {  //function to access protected member
        return prot;
    }
};

int main() {
    PublicDerived ob1;
    cout << "Private = " << ob1.getPVT() << endl;  //to display private class
    cout << "Protected = " << ob1.getProt() << endl; //to display protected class
    cout << "Public = " << ob1.pub << endl;
    return 0;
}