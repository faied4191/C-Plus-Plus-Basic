#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter Hour of the Day: ";
    cin >> a;

    if (a < 10) {
        cout << "Good morning";
    } else if (a < 20) {
        cout << "Good day";
    } else {
        cout << "Good evening";
    }
    return 0;
}