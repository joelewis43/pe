#include <iostream>
#include "../eq.h"
using namespace std;




int main() {

    //check if num%i == 0
    //if yes, check if i is prime

    //define the target num, the loop cap, and the lpf
    const unsigned long int num = 600851475143;
    const unsigned long int cap = num/2;
    int lpf = 0;
    
    //loop from 2 to the cap, looking for factors
    for (int i=2; i<cap; i++) {
        
        //check if i is a factor
        if (num%i == 0) {
            if (isPrime(i)) { lpf = i; }
        }
        
    }

    cout << "The larges prime factor of " << num << " is: " << lpf << endl;


    return 0;
}
