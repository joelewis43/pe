#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //define cap
    const int cap = 100;

    //define storage variables
    unsigned long int sumSq = 0;
    unsigned long int sqSum = 0;

    //define difference variable
    unsigned long int dif = 0;
    
    //loop from 1 to the cap
    for (int i=1; i<=cap; i++) {

        //square the value and sum it
        sumSq += pow(i,2);

        //sum the values then...
        sqSum += i;

    }

    //square it
    sqSum = pow(sqSum, 2);

    //calculate the difference
    dif = sqSum-sumSq;

    //solution text
    cout << "The difference is: " << dif << endl;

    //everything is OK!
    return 0;
}
