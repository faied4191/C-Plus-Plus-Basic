#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    void area() {
        int area = length * width;
        cout << "Area: " << area << endl;
    }

    void perimeter() {
        int perimeter = 2 * (length + width);
        cout << "Perimeter: " << perimeter << endl;
    }

};