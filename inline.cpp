#include<iostream>
using namespace std;

inline int cube(int s) {    //inline function
    return s*s*s;
}

inline int square(int s) {
    return s*s;
}

int main() {
    int num;
    cout << "Enter number for cube:  " << "\n";
    cin >> num;
    cout << "Cube is: " << cube(num) << "\n";
    cout << "The square of 3 is: " << square(3) << "\n";
    return 0;
}