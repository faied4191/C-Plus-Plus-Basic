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