#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char key[] = "mango";
    char buffer[50];

    do {
        cout << "Enter a fruit: ";
        cin>>buffer;
    } 
    while (strcmp (key,buffer) !=0);
    cout<<"Correct!"<<endl;
    return 0;
}