//Multilevel

#include <iostream>

using namespace std;

// Base class

class Vehicle {

public:

void drive() {

cout << "Vehicle is driving." << endl;

}

};

// Derived class 1

class Car : public Vehicle {

public:

void honk() {

cout << "Car is honking." << endl;

}

};

// Derived class 2

class SportsCar : public Car {

public:

void race() {

cout << "Sports car is racing." << endl;

}

};

// Main function

int main() {

// Creating object of derived class

SportsCar mySportsCar;

// Calling methods of base and derived class

mySportsCar.drive();

mySportsCar.honk();

mySportsCar.race();

return 0;

}
