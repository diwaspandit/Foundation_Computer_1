//Diwas Pandit
//zxh15
//September 30, 2024
//Program: Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main(){
    double celsiusValue;
    double fahrenheitValue;
    char userChar;

    celsiusValue = 0.0;
    userChar = 'y';

    while (userChar == 'y') {
        fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;

        cout << celsiusValue << " C is ";
        cout << fahrenheitValue << " F" << endl;

        cout << "Type y to continue, any other to quit: ";
        cin >> userChar;

        celsiusValue = celsiusValue + 5;
        cout << endl;

    }

    cout << "Goodbye!" << endl;
}