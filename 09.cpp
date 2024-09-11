#include <iostream>
#include <string>
using namespace std;

float isSum(float x, float y) {
    return x + y;
}

int main() {
    float a;
    float b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    float sum = isSum(a, b);

    cout << "The sum is: " << sum << endl;
    return 0;
}