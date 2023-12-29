#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    int towerLength;

    cout << "Enter your length : \n";
    cin >> towerLength;

    for(x = 0;x <towerLength; x++) {
     for(y = 0; y <= x; y++) {
         cout << "*";
     }
     cout << "\n";

    }

}