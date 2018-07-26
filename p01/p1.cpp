#include <iostream>
using namespace std;

int main(){
    
    //defines testing cap and sum
    const int cap = 1000;
    int sum = 0;

    //check numbers 1 <= i < cap
    for (int i=1; i<cap; i++) {

        //check if i is a multiple of 3
        if (i%3 == 0) { sum += i; }
        
        //check if i is a multiple of 5
        else if (i%5 == 0) {sum += i; }
        
        //else do nothing
        else { }
    }
    
    //print the result
    cout << "The ans for " << cap << " is: " << sum << endl;

    //everything is OK!
    return 0;
}
