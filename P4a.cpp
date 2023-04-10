4.a) complex Number

#include <iostream>

using namespace std;

class Complex {

private:

double real;

double imag;

public:

Complex(double r = 0, double i = 0) {

real = r;

imag = i;

}

Complex operator+(Complex const &obj) {

Complex res;

res.real = real + obj.real;

res.imag = imag + obj.imag;

return res;

}

Complex operator*(Complex const &obj) {

Complex res;

res.real = (real * obj.real) - (imag * obj.imag);

res.imag = (real * obj.imag) + (imag * obj.real);

return res;

}

void print() {

if (imag >= 0) {

cout << real << " + " << imag << "i" << endl;

} else {

cout << real << " - " << -imag << "i" << endl;

}

}

};

int main() {

Complex c1(2, 3);

Complex c2(4, 5);

Complex c3 = c1 + c2;

Complex c4 = c1 * c2;

c1.print(); // Output: 2 + 3i

c2.print(); // Output: 4 + 5i

c3.print(); // Output: 6 + 8i

c4.print(); // Output: -7 + 22i

return 0;

}
