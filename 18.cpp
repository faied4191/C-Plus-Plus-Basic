#include <iostream>
using namespace std;

  void add(int a, int b) {
    cout << "The Sum is: " << a + b << endl;
  }

  void add(double a, double b) {
    cout << "The Sum is: " << a + b << endl;
  }

  void add(int a, int b, int c) {
    cout << "The Sum is: " << a + b + c << endl;
  }

int main() {

  add(5, 3);
  add(2.5, 1.8);
  add(1, 2, 3);
  return 0;
}