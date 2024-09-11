#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int count;
    cout << "Enter Your Name: ";
    getline(cin, a);

    for (int i=0; a[i]!=0; i++) {
        count++;
    }

    cout << "Name: " << a << endl;
    cout << "Length: " << count << endl;
    return 0;
}