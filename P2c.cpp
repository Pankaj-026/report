2.c)prime nos b/w i and n

#include <iostream>

using namespace std;

int main() {

int n, upto;

cout << "Enter the value of upto: ";

cin >> upto;

cout << "Prime numbers between 1 and " << upto<< ":" <<

endl;

for(n=2; n<=upto; n++){

for (int i = 2; i <=( n/2); i++) {

if (n%i==0) {

i=n;

break;

}

}

if(i!=n){

cout << n<<"";

}

}

return 0;

}
