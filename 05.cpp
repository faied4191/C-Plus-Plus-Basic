#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int greatest;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;

    if (a > b && a > c) {
        greatest = a;
    } else if (b > a && b > c) {
        greatest = b;
    } else {
        greatest = c;
    }

    cout << "The Greatest is: " << greatest << endl;
    return 0;
}