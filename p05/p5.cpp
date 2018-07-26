#include <iostream>

using namespace std;

int main() {

    const int cap = 20;

    unsigned long int i = 2;

    bool flag = true;

    while (flag) {

        for (int j=1; j<=cap; j++) {
    
            if (i%j != 0) { i++; break; }
            else if (j == cap) { flag = false; }
        }


    }

    cout << i << endl;




    //everything is OK!
    return 0;
}
