//convert seconds in hh:mm:ss

#include <iostream>

using namespace std;

int main()

{

    // declare variables

    int time = 0;

    int hour = 0;

    int min = 0;

    int sec = 0;

    // obtain data from user

    cout << "Enter a time in seconds: ";

    cin >> time;

    // using the time from ^ above, convert

    // secs to HH:MM:SS format using division

    // and modulus

    hour = time/3600;

    time = time%3600;

    min = time/60;

    time = time%60;

    sec = time;

    // display data to user

    cout<<"\nThe time in HH:MM:SS format is: "<<hour<<" hours, "

        <<min<<" minutes, and "<<sec<<" seconds!\n";

    return 0;

}
