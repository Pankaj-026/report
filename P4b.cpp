//4.b)new/delete operator

#include <iostream>

using namespace std;

class MyClass {

private:

int x;

int y;

public:

MyClass() {

cout << "Object created!" << endl;

}

void set_values(int a, int b) {

x = a;

y = b;

}

void print() {

cout << "x: " << x << ", y: " << y << endl;

}

void *operator new(size_t size) {

cout << "Overloading new operator with size: " << size << endl;

void *p = ::new MyClass;

return p;

}

void operator delete(void *p) {

cout << "Overloading delete operator" << endl;

free(p);

}

};

int main() {

MyClass *obj = new MyClass;

obj->set_values(5, 10);

obj->print();

delete obj;

return 0;

}
