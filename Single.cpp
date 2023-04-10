//Single Inheritance

#include <iostream>

using namespace std;

// Base class

class Vehicle {

public:

void drive() {

cout << "Vehicle is driving." << endl;

}

};

// Derived class

class Car : public Vehicle {

public:

void honk() {

cout << "Car is honking." << endl;

}

};

// Main function

int main() {

// Creating object of derived class

Car myCar;

// Calling methods of base and derived class

myCar.drive();

myCar.honk();

return 0;

}
