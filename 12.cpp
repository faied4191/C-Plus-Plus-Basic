#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements: ";
    cin >> a;
    string arr1[a];

    for (int i = 0; i < a; i++) {
        cout << "Enter element names " << i + 1 << ": ";
        cin >> arr1[i];
    }

    cout << "First Element Name: " << arr1[0] << endl;
    cout << "First Element Size: " << sizeof(arr1[0]) << endl;
    cout << "Array Size: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    return 0;
}