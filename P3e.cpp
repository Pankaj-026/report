//3.e) copy constructor

#include <iostream>

using namespace std;

class MyClass {

private:

int x;

public:

MyClass(int n) {

x = n;

}

MyClass(const MyClass& other) {

x = other.x;

cout << "Copy constructor called" << endl;

}

int getX() {

return x;

}

};

int main() {

MyClass obj1(5);

MyClass obj2 = obj1; // Copy constructor called

cout << "obj1.x = " << obj1.getX() << endl;

cout << "obj2.x = " << obj2.getX() << endl;

return 0;

}
