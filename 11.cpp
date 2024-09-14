#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr1[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    arr1[0] = "Opel";
    cout << "First Element Name: " << arr1[0] << endl;
    cout << "First Element Size: " << sizeof(arr1[0]) << endl;
    cout << "Array Size: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    return 0;
}