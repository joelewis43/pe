#include <iostream>
using namespace std;

int main() {

    //max fib number
    int cap = 4000000;

    //declare sum
    int sum =2;

    //new fib number calculated in next
    //last gets current, current gets next
    int last = 1;
    int current = 2;
    int next = 0;
    
    while (true) {
        next = last + current;
        last = current;
        current = next;

        if (current >= cap) { break; }
        else if (current % 2 == 0) { sum += current; } 
    }

    cout << "The sum of even numbers below " << cap << " is: " << sum << endl;

    //everything is OK!
    return 0;
}
