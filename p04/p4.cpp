#include <iostream>
#include <string>
#include <cmath>

#include "eq.h"

using namespace std;

bool isPalindrome(string a){

    if (a == reverseString(a)) { return true; }
    return false;

}


int main() {

    //variables for storage
    long int pal = 0;
    long int prod = 0;

    //variables for loop bounds
    const int digits = 3;
    const int min = pow(10,digits-1);
    const int max = pow(10,digits);

    for (int i=min; i<max; i++) {
        for (int j=min; j<max; j++) {

            //calculate the product
            prod = i*j;

            //check if its a palindrome
            if (isPalindrome(to_string(prod))) {

                //check if the new palindrome is greater than the previous 
                if (prod > pal) {
                    pal = prod;
                }
            }
        }
    }

    cout << "The max palindrome for two " << digits <<  " digit numbers is: " << pal << endl;

    //everything is OK!
    return 0;
}
