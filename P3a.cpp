3.a)print name of the student n roll no.

#include <iostream>

#include <string>

using namespace std;

class Student {

private:

string name;

int roll_number;

public:

void set_name(string student_name) {

name = student_name;

}

void set_roll_number(int student_roll_number) {

roll_number = student_roll_number;

}

string get_name() {

return name;

}

int get_roll_number() {

return roll_number;

}

};

int main() {

Student student;

student.set_name("John");

student.set_roll_number(12345);

cout << "Name: " << student.get_name() << endl;

cout << "Roll number: " << student.get_roll_number() << endl;

return 0;

}
