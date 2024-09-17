#include <iostream>
using namespace std;

class Calculator {
public:
  void add(int a, int b) {
    cout << "The Sum is: " << a + b << endl;
  }

  void add(double a, double b) {
    cout << "The Sum is: " << a + b << endl;
  }

  void add(int a, int b, int c) {
    cout << "The Sum is: " << a + b + c << endl;
  }
};