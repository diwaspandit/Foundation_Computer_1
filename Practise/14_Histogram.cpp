//Diwas Pandit
//zxh15
//October 6, 2024

#include <iostream>
using namespace std;

int main(){
    int numAsterisk;
    int i;

    numAsterisk =0;

    while(numAsterisk >=0){
        cout << "Enter an integer (negative to quit):";
        cin >> numAsterisk;

        if(numAsterisk >= 0){
            cout << "Depicted graphically:" << endl;
            for (i=1; i<=numAsterisk; ++i){
                cout << "*";
            }
            cout << endl << endl;
        }

    }
    cout << "Goodbye!" << endl;

    return 0;
}