Multiple inheritance

#include <iostream>

using namespace std;

// Base class 1

class Vehicle {

 public:

 void drive() {

 cout << "Vehicle is driving." << endl;

 }

};

// Base class 2

class Radio {

 public:

 void playMusic() {

 cout << "Radio is playing music." << endl;

 }

};

// Derived class

class Car : public Vehicle, public Radio {

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

 myCar.playMusic();

 myCar.honk();

 return 0;

}
