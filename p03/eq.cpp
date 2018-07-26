
//implementation file for useful functions

#include "eq.h"

bool isPrime(int a) {

    for (int i=2; i<a; i++) {

        if (a%i == 0) { return false; }

    }

    return true;

}
