#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cout << "Enter Your Name: ";
    getline(cin, a);
    cout << "Enter Your ID: ";
    getline(cin, b);
    
    cout << "Name: " << a << endl;
    cout << "ID: " << b << endl;
    cout << "Length of Name= " << a.length();
    return 0;
}