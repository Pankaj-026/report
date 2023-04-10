//1.c) volumes 
#include <iostream>

using name space std;

void Sqvol (float side) {

cout << " The volume of square is "<<< side << endl;

}

void conevol (flat r, float h) {

cout << "The volume of the cone is " << 3-14*r*r*h/3 <<endl;

}

void rec vol (float I, float b , float h){

cout<<"The volume of the rectangle is " << l*b*h<<endl;

}

int main() {

float side, r, h1, l, w, h2;

cout << "Enter side to find volume of square!"<<endl;

cin>>side;

Sqvol (side);

cout<<"Entoy radius and height to find volume of come:" <<

endl;

cin>> r >> h1;

Cone vol (r, h);

cout << "Enter lenght, width and height to find volume of

rectangle?"<<endl;

cin >>l >>w>>h2;

recvol (l , w, h2);

return 0;

}
