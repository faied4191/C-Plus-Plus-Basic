#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eat" << endl;
    }

    void sleep() {
        cout << "Sleep" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog ob;

    ob.eat();
    ob.sleep();
    ob.bark();
    return 0;
}