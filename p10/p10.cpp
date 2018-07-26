#include <iostream>

#include "eq.h"

using namespace std;

int main() {

    //define max
    int cap = 2000000;

    //define sum
    unsigned long int sum = 0;

    for (int i=2; i<=cap; i++) {

        if(isPrime(i)) { sum += i; }

    }
    
    cout << "The sum of primes below " << cap << " is: " << sum << endl;

    //Everything is OK!
    return 0;
}
