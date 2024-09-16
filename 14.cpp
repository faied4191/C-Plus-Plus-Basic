#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book ob1("The Lord of the Rings", "J.R.R. Tolkien", 1954);
    Book ob2("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 1979);

    ob1.display();
    ob2.display();
    return 0;
}