#include <iostream>

#include "eq.h"

using namespace std;

int main() {

    const int cap = 10001;
    int primeCount = 0;
    int num = 1;

    while (primeCount != cap) {

        num++;    

        if (isPrime(num)) { primeCount++; }

    }

    cout << "The " << cap << " prime number is: " << num << endl;


    return 0;
}
