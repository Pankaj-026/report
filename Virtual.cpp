//Virtual function class

#include <iostream.h>

class Base{

public:

void display(){

cout<<"Display base\n";

}

virtual void show(){

cout<<"Show Base\n";

}

};

class Derived : public Base{

public:

void display (){

cout<<"Display Derived\n";

}

void show(){

cout<<"Show Derived\n";

}

};

int main() {

Derived D;

Base* ptr;

cout<<"ptr points to base\n";

ptr=&D;

ptr->display();

ptr->show();

cout<<"ptr points to derived\n";

ptr=&D;

ptr->display();

ptr->show();

return 0;

}
