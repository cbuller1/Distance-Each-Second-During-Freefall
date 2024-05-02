
//  Created by Cody Buller
// This program will calculate the distance an object falls each second if dropped from a given height.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//Program information
    cout << "This program will calculate the distance an object falls each second if dropped from a given height.\n";
    cout << " Press (ENTER) to begin program: ";
    cin.get();
    cout << endl << endl;
//Declare constants & variables
    double seconds = 1; //seconds for accelerationG formula
    double totalTimeFall = 0; //total time the object fell
    double dropHeight = 0; //height
    double accelerationG = 9.8/(pow(seconds, 2.0)); //Gravity Acceleration
//Request information from user
    cout << "Please input the time of fall in seconds: ";
    cin >> totalTimeFall;
    cout << endl;
    cout << "Please input the height of the drop in meters: ";
    cin >> dropHeight;
    cout << endl;
//Loop formula until distance fallen exceeds drop height;
    int counter = 0;
        while (counter <= totalTimeFall)
            {
            cout << counter << " ";
            cout << 0.5 * accelerationG * pow(counter, 2.0) << endl;
            seconds++;
            counter++;
            }
    cout << "Warning-Bad Data: The distance fallen exceeds the height of the drop\n\n";
    

    return 0;
}
