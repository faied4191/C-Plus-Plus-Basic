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