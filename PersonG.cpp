//6.a) name n age ptr person greater 

#include<iostream>

#include<string.h>

using namespace std;

class person{

char name[20];

float age;

public:

person(char *s, float a){

strcpy(name, s);

age = a;

}

person &greater(person &x)

{

if(x.age> age){

return x;

}else{

return *this;

}

}

void display(void){

cout<<"Name:"<<name<<"\n"

<<"Age: "<<age<<"\n";

}

};

int main(){

person pl("Pankaj",18.0),p2("Shahnawaz",23.0),p3("Roshan", 17.0);

person p=pl.greater (p2);

cout<<"Elder Person is:\n";

p.display();

p=pl.greater (p2);

cout<<"\nElder Person is;\n";

p.display();

return 0;

}
