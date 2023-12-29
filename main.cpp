#include <iostream>
using namespace std;

int main() {
   long int inputNumber, sum = 0;

   cin>> inputNumber;

   while (inputNumber != 0) {
       sum += inputNumber;
       cin>> inputNumber;
   }

   cout<< sum;

    return 0;
}