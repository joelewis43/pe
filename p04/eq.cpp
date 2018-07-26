
//implementation file for useful functions

#include "eq.h"

bool isPrime(int a) {

    for (int i=2; i<a; i++) {

        if (a%i == 0) { return false; }

    }

    return true;

}


std::string reverseString(std::string a) {

    int L = a.length();

    std::string b = a;

    for (int i=L-1; i>=0; i--){

        b[i] = a[L-i-1];

    }

    return b;

}
