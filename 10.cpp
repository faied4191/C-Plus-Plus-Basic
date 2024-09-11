#include <iostream>
#include <string>
using namespace std;

float isSum(float x, float y) {
  return x + y;
}

float isMax(float x, float y) {
  float large;
  if (x > y) {
    large = x;
  } else {
    large = y;
  }
  return large;
}

int main() {
  float a;
  float b;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;

  float sum = isSum(a, b);
  float max = isMax(a, b);

  cout << "The sum is: " << sum << endl;
  cout << "The maximum number is: " << max << endl;
  return 0;
}